
// DigitalWatchView.cpp: CDigitalWatchView 클래스의 구현
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "DigitalWatch.h"
#endif

#include "DigitalWatchDoc.h"
#include "DigitalWatchView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDigitalWatchView

IMPLEMENT_DYNCREATE(CDigitalWatchView, CView)

BEGIN_MESSAGE_MAP(CDigitalWatchView, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CREATE()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CDigitalWatchView 생성/소멸

CDigitalWatchView::CDigitalWatchView() noexcept
{
	// TODO: 여기에 생성 코드를 추가합니다.
	timerRun = false;  // 타이머 실행 여부
	timerType = true; // 타이머 유형 (true: 스톱워치, false: 카운트다운)


}

CDigitalWatchView::~CDigitalWatchView()
{
}

BOOL CDigitalWatchView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CDigitalWatchView 그리기

void CDigitalWatchView::OnDraw(CDC* pDC)
{
	CDigitalWatchDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	CRect rect;
	GetClientRect(&rect);
	pDC->DrawText(strTimer, rect, DT_SINGLELINE|DT_CENTER);
	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CDigitalWatchView 인쇄

BOOL CDigitalWatchView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CDigitalWatchView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CDigitalWatchView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CDigitalWatchView 진단

#ifdef _DEBUG
void CDigitalWatchView::AssertValid() const
{
	CView::AssertValid();
}

void CDigitalWatchView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDigitalWatchDoc* CDigitalWatchView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDigitalWatchDoc)));
	return (CDigitalWatchDoc*)m_pDocument;
}
#endif //_DEBUG


// CDigitalWatchView 메시지 처리기

int CDigitalWatchView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  여기에 특수화된 작성 코드를 추가합니다.
	SetTimer(0, 1000, NULL);
	timerRun = true;  // 타이머 시작
	return 0;	
}

void CDigitalWatchView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	CString str;
	CTime timer;
	int hour;
	timer = CTime::GetCurrentTime(); // 현재 시간 가져오기

	if (timerType) {
		// 스톱워치 모드
		str.Format(_T("현재는 %02d년 %02d월 %02d일"), timer.GetYear(), timer.GetMonth(), timer.GetDay());
	}
	else
	{
		hour = timer.GetHour();
		if (hour >= 13) {
			hour = hour - 12;
		}
		else {
			str = _T("응애");
		}
	}
	CView::OnTimer(nIDEvent);
}
