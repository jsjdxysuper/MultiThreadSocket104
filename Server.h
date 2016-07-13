// Server.h: interface for the Server class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SERVER_H__2AECC39C_DBB6_40F2_A657_0554A4B99B38__INCLUDED_)
#define AFX_SERVER_H__2AECC39C_DBB6_40F2_A657_0554A4B99B38__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Server  
{
public:
	Server();
	virtual ~Server();
	void Start(HWND dlgH);

};

typedef struct 
{
	SOCKADDR_IN addrClient;
	SOCKET sockConn;
	HWND dlgH;
}SOCKINFO;
#endif // !defined(AFX_SERVER_H__2AECC39C_DBB6_40F2_A657_0554A4B99B38__INCLUDED_)
