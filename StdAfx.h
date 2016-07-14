// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__52308364_A791_4611_8D4D_54687A049F41__INCLUDED_)
#define AFX_STDAFX_H__52308364_A791_4611_8D4D_54687A049F41__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdisp.h>        // MFC Automation classes
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT
#include <afxmt.H>
#include <Winsock2.H>
//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.
extern BOOL ServerState;
extern int ThreadNum;

extern CMutex g_mutex;
#endif // !defined(AFX_STDAFX_H__52308364_A791_4611_8D4D_54687A049F41__INCLUDED_)
