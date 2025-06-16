// CTitleWriter.cpp: 구현 파일
//

#include "pch.h"
#include "ToDoList.h"
#include "afxdialogex.h"
#include "CTitleWriter.h"


// CTitleWriter 대화 상자

IMPLEMENT_DYNAMIC(CTitleWriter, CDialogEx)

CTitleWriter::CTitleWriter(CWnd* pParent /*=nullptr*/)
	: CDialogEx(ID_Main, pParent)
	, strMainCaption(_T(""))
	, strTitle(_T(""))
	, StrDate(_T(""))
{

}

CTitleWriter::~CTitleWriter()
{
}

void CTitleWriter::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_Title, strTitle);
	DDX_CBString(pDX, IDC_LimitedDates, StrDate);
}


BEGIN_MESSAGE_MAP(CTitleWriter, CDialogEx)
	ON_EN_CHANGE(IDC_Title, &CTitleWriter::OnEnChangeTitle)
	ON_CBN_SELCHANGE(IDC_LimitedDates, &CTitleWriter::OnCbnSelchangeLimiteddates)
	ON_BN_CLICKED(IDC_Importancy_1, &CTitleWriter::OnBnClickedImportancy1)
	ON_BN_CLICKED(IDC_Importancy_2, &CTitleWriter::OnBnClickedImportancy2)
	ON_BN_CLICKED(IDC_Importancy_3, &CTitleWriter::OnBnClickedImportancy3)
	ON_LBN_SELCHANGE(IDC_LIST1, &CTitleWriter::OnLbnSelchangeList1)
	ON_BN_CLICKED(IDOK, &CTitleWriter::OnBnClickedOk)
END_MESSAGE_MAP()


// CTitleWriter 메시지 처리기

void CTitleWriter::OnEnChangeMaincaption()
{


	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// ENM_CHANGE가 있으면 마스크에 ORed를 플래그합니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CTitleWriter::OnEnChangeTitle()
{
	CTitleWriter* writer = new CTitleWriter;
	strMainCaption.Empty();
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// ENM_CHANGE가 있으면 마스크에 ORed를 플래그합니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CTitleWriter::OnCbnSelchangeLimiteddates()
{
	CTime currentTime = CTime::GetCurrentTime();
	// 현재 시간을 가져옵니다.
	strDate.Format(_T("%d.%d.%d."), currentTime.GetYear(), currentTime.GetMonth(), currentTime.GetDay());
	
	UpdateData(true);
	

	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CTitleWriter::OnBnClickedImportancy1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CTitleWriter::OnBnClickedImportancy2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CTitleWriter::OnBnClickedImportancy3()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CTitleWriter::OnLbnSelchangeList1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CTitleWriter::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}
