// AnimView.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "CenterView.h"
#include "SpriteTool.h"
#include "AnimView.h"
#include "SpriteManager.h"
#include "FrameInfo.h"
// CAnimView

IMPLEMENT_DYNCREATE(CCenterView, CScrollView)

CCenterView::CCenterView()
{

}

CCenterView::~CCenterView()
{
}


BEGIN_MESSAGE_MAP(CCenterView, CScrollView)
	ON_WM_CREATE()
END_MESSAGE_MAP()

void CCenterView::SetSpritInfo(CSpriteInfo* pSpriteInfo)
{
	m_pSeletedSprite = pSpriteInfo; 

	Invalidate(TRUE);
}

// CAnimView �׸����Դϴ�.

void CCenterView::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

	CSize sizeTotal;
	// TODO: �� ���� ��ü ũ�⸦ ����մϴ�.
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);
}

void CCenterView::OnDraw(CDC* pDC)
{
	//CDocument* pDoc = GetDocument();
	//// TODO: ���⿡ �׸��� �ڵ带 �߰��մϴ�.
	//if (!m_pSeletedSprite)
	//	return;

	//// ������ ���� ���
	//CImage* pImage = m_pSeletedSprite->GetImage();

	//if (!pImage)
	//	return;

	//VEC_FRAMEINFO& vecFrameInfo = m_pSeletedSprite->GetFrameInfoList();
	//int width = 0;
	//int height = 0;
	//VEC_FRAMEINFO_ITER iter = vecFrameInfo.begin();
	//LONGLONG current_time = GetTickCount64();
	//for ( int i = 0; iter != vecFrameInfo.end();)
	//{
	//	FRAME_INFO* pFrame = *iter;
	//	LONGLONG last_time = current_time;
	//	LONGLONG current_time = GetTickCount64();
	//	LONGLONG elapsed_time = current_time - last_time;
	//	static LONGLONG total_elapsed_time = 0;
	//	total_elapsed_time += elapsed_time;

	//	if(total_elapsed_time >= (pFrame->aniTime*1000))
	//	{
	//		//total_elapsed_time = 0;

	//		pImage->BitBlt(pDC->m_hDC, 
	//			50, 
	//			50, 
	//			pFrame->rect.Width(), 
	//			pFrame->rect.Height(), 
	//			pFrame->rect.left, 
	//			pFrame->rect.top, 
	//			SRCCOPY);
	//		/*Invalidate(TRUE);*/
	//		++iter; 
	//		i++;
	//	}
	//}
}


// CAnimView �����Դϴ�.

#ifdef _DEBUG
void CCenterView::AssertValid() const
{
	CScrollView::AssertValid();
}

#ifndef _WIN32_WCE
void CCenterView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}
#endif
#endif //_DEBUG


// CAnimView �޽��� ó�����Դϴ�.

int CCenterView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CScrollView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  ���⿡ Ư��ȭ�� �ۼ� �ڵ带 �߰��մϴ�.
	CSize sizeTotal;
	sizeTotal.cx = sizeTotal.cy = 100;
	SetScrollSizes(MM_TEXT, sizeTotal);

	return 0;
}