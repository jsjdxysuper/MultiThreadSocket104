// MultithreadTDlg.h : header file
//

#if !defined(AFX_MULTITHREADTDLG_H__798ED2E5_F65B_4A86_BC66_37A6B21F319E__INCLUDED_)
#define AFX_MULTITHREADTDLG_H__798ED2E5_F65B_4A86_BC66_37A6B21F319E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define WM_CHILDFRAMEDBCLK  WM_USER+1   // do something


/////////////////////////////////////////////////////////////////////////////
// CMultithreadTDlg dialog

class CMultithreadTDlg : public CDialog
{
private:
// Construction
public:
	CMultithreadTDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMultithreadTDlg)
	enum { IDD = IDD_MULTITHREADT_DIALOG };
	CRichEditCtrl	m_richEdit_listConInfo;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMultithreadTDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMultithreadTDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton2();
	afx_msg LRESULT OnReceiveMsg(WPARAM wParam, LPARAM lParam);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MULTITHREADTDLG_H__798ED2E5_F65B_4A86_BC66_37A6B21F319E__INCLUDED_)
