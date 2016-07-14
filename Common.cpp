// Common.cpp: implementation of the Common class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "MultithreadT.h"
#include "Common.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Common::Common()
{

}

Common::~Common()
{

}
CString Common::GetTime()
{
	CTime time = CTime::GetCurrentTime(); ///构造CTime对象 
	CString strTime = time.Format("%Y-%m-%d %H:%M:%S");  
	return strTime;
}