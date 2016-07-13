// MultithreadT.h : main header file for the MULTITHREADT application
//

#if !defined(AFX_MULTITHREADT_H__FA8B5B69_D16A_43B2_8AAA_D743E6EF0230__INCLUDED_)
#define AFX_MULTITHREADT_H__FA8B5B69_D16A_43B2_8AAA_D743E6EF0230__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMultithreadTApp:
// See MultithreadT.cpp for the implementation of this class
//

class CMultithreadTApp : public CWinApp
{
public:
	CMultithreadTApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMultithreadTApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMultithreadTApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MULTITHREADT_H__FA8B5B69_D16A_43B2_8AAA_D743E6EF0230__INCLUDED_)
