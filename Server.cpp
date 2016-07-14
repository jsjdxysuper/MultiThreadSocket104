// Server.cpp: implementation of the Server class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MultithreadT.h"
#include "Server.h"
#include "stdio.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Server::Server()
{

}

Server::~Server()
{

}

void checkSockVersion()
{
	WORD wVersionRequested;
	WSADATA wsaData;
	int err;
	
	wVersionRequested = MAKEWORD( 1, 1 );
	
	err = WSAStartup( wVersionRequested, &wsaData );
	if ( err != 0 ) {
		return;
	}
	if ( LOBYTE( wsaData.wVersion ) != 1 ||
        HIBYTE( wsaData.wVersion ) != 1 ) {
		WSACleanup( );
		return; 
	}
}


void dealWithConnection(SOCKINFO *sockInfo)
{
	char sendBuf[100];
	sprintf(sendBuf,"Welcome %s to http://weigongwan.cublog.cn",
		inet_ntoa(sockInfo->addrClient.sin_addr));
	send(sockInfo->sockConn,sendBuf,strlen(sendBuf)+1,0);
	char recvBuf[4096];
	int len = recv(sockInfo->sockConn,recvBuf,4096,0);
	printf("%s\n",recvBuf);
	closesocket(sockInfo->sockConn);
	
	recvBuf[len] = '\0';
	CString *txt = new CString();
	txt->Format("%s\n",recvBuf);
	
	::SendMessage(sockInfo->dlgH,WM_USER+1,(WPARAM)((void*)txt),LPARAM(txt->GetLength()));
	delete txt;
}

void ListenMianFunction(HWND dlgH)
{

	checkSockVersion();
	SOCKET sockSrv=socket(AF_INET,SOCK_STREAM,0);
	
	SOCKADDR_IN addrSrv;
	addrSrv.sin_addr.S_un.S_addr=htonl(INADDR_ANY);
	addrSrv.sin_family=AF_INET;
	addrSrv.sin_port=htons(6000);
	
	bind(sockSrv,(SOCKADDR*)&addrSrv,sizeof(SOCKADDR));
	
	listen(sockSrv,5);
	
	SOCKADDR_IN addrClient;
	int len=sizeof(SOCKADDR);
	
	SOCKET sockConn;
	SOCKINFO sockInfo;
	while(1)
	{
		sockConn=accept(sockSrv,(SOCKADDR*)&addrClient,&len);
		
		sockInfo.addrClient = addrClient;
		sockInfo.sockConn = sockConn;
		sockInfo.dlgH = dlgH;

		LPDWORD lpThreadId = 0;
		CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)dealWithConnection,(void*)(&sockInfo),0,lpThreadId);

		if(!ServerState)
		{
			break;		
		}
	}
	
}
void Server::Start(HWND dlgH)
{
	LPDWORD lpThreadId = 0;
	CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)ListenMianFunction,dlgH,0,lpThreadId);
}