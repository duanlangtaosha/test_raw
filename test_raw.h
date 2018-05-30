// test_raw.h : main header file for the TEST_RAW application
//

#if !defined(AFX_TEST_RAW_H__595A5BB1_29A2_4A8F_AC6A_88788746B76B__INCLUDED_)
#define AFX_TEST_RAW_H__595A5BB1_29A2_4A8F_AC6A_88788746B76B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTest_rawApp:
// See test_raw.cpp for the implementation of this class
//

class CTest_rawApp : public CWinApp
{
public:
	CTest_rawApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_rawApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTest_rawApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_RAW_H__595A5BB1_29A2_4A8F_AC6A_88788746B76B__INCLUDED_)
