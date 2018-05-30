// test_rawDlg.h : header file
//

#if !defined(AFX_TEST_RAWDLG_H__184E299E_63DE_4E24_857F_59222F7E27E9__INCLUDED_)
#define AFX_TEST_RAWDLG_H__184E299E_63DE_4E24_857F_59222F7E27E9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTest_rawDlg dialog

class CTest_rawDlg : public CDialog
{
// Construction
public:
	CTest_rawDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTest_rawDlg)
	enum { IDD = IDD_TEST_RAW_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTest_rawDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTest_rawDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEST_RAWDLG_H__184E299E_63DE_4E24_857F_59222F7E27E9__INCLUDED_)
