// cSelectionProfit.cpp: 구현 파일
//

#include "pch.h"
#include "ToDoList.h"
#include "afxdialogex.h"
#include "cSelectionProfit.h"


// cSelectionProfit 대화 상자

IMPLEMENT_DYNAMIC(cSelectionProfit, CDialogEx)

cSelectionProfit::cSelectionProfit(CWnd* pParent /*=nullptr*/)
	: CDialogEx(ID_SelectionProfit, pParent)
{

}

cSelectionProfit::~cSelectionProfit()
{
}

void cSelectionProfit::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(cSelectionProfit, CDialogEx)
END_MESSAGE_MAP()


// cSelectionProfit 메시지 처리기
