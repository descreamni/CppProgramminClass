#pragma once
#include "afxdialogex.h"


// cSelectionProfit 대화 상자

class cSelectionProfit : public CDialogEx
{
	DECLARE_DYNAMIC(cSelectionProfit)

public:
	cSelectionProfit(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~cSelectionProfit();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = ID_SelectionProfit };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
