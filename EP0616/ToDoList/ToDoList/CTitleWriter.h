#pragma once
#include "afxdialogex.h"
#include "cSelectionProfit.h"

// CTitleWriter 대화 상자

class CTitleWriter : public CDialogEx
{
	DECLARE_DYNAMIC(CTitleWriter)

public:
	CTitleWriter(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CTitleWriter();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = ID_Main };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeMaincaption();
	afx_msg void OnEnChangeTitle();
	afx_msg void OnCbnSelchangeLimiteddates();
	afx_msg void OnBnClickedImportancy1();
	afx_msg void OnBnClickedImportancy2();
	afx_msg void OnBnClickedImportancy3();
	CString strMainCaption;
	CString strTitle;
	afx_msg void OnLbnSelchangeList1();
	afx_msg void OnBnClickedOk();
	CString strDate;
	CString strImportantRatio;
};
