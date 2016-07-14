// Common.h: interface for the Common class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_COMMON_H__B42513D0_21DB_4658_89BB_18F279C52E59__INCLUDED_)
#define AFX_COMMON_H__B42513D0_21DB_4658_89BB_18F279C52E59__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Common  
{
public:
	Common();
	virtual ~Common();
	static CString GetTime();
};

#endif // !defined(AFX_COMMON_H__B42513D0_21DB_4658_89BB_18F279C52E59__INCLUDED_)
