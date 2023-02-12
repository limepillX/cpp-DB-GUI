
// Yakovenko_4View.cpp : ���������� ������ CYakovenko_4View
//

#include "stdafx.h"
// SHARED_HANDLERS ����� ���������� � ������������ �������� ��������� ���������� ������� ATL, �������
// � ������; ��������� ��������� ������������ ��� ��������� � ������ �������.
#ifndef SHARED_HANDLERS
#include "Yakovenko_4.h"
#endif

#include "Yakovenko_4Set.h"
#include "Yakovenko_4Doc.h"
#include "Yakovenko_4View.h"
#include "FilterDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CYakovenko_4View

IMPLEMENT_DYNCREATE(CYakovenko_4View, CRecordView)

BEGIN_MESSAGE_MAP(CYakovenko_4View, CRecordView)
	// ����������� ������� ������
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_COMMAND(ID_RECORD_ADD, &CYakovenko_4View::OnRecordAdd)
	ON_COMMAND(ID_RECORD_DELETE, &CYakovenko_4View::OnRecordDelete)
	ON_COMMAND(ID_SORT_ID, &CYakovenko_4View::OnSortId)
	ON_COMMAND(ID_SORT_AvMark, &CYakovenko_4View::OnSortAvmark)
	ON_COMMAND(ID_FILTER_ID, &CYakovenko_4View::OnFilterId)
	ON_COMMAND(ID_FILTER_AvMark, &CYakovenko_4View::OnFilterAvmark)
END_MESSAGE_MAP()

// ��������/����������� CYakovenko_4View

CYakovenko_4View::CYakovenko_4View()
	: CRecordView(IDD_YAKOVENKO_4_FORM)
{
	m_bAdding = FALSE;
	m_pSet = NULL;
	// TODO: �������� ��� ��������

}

CYakovenko_4View::~CYakovenko_4View()
{
}

void CYakovenko_4View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);

	DDX_FieldText(pDX, IDC_EkzamenCode, m_pSet->m_Code, m_pSet);
	DDX_FieldText(pDX, IDC_EkzamenGroup, m_pSet->m_Group, m_pSet);
	DDX_FieldText(pDX, IDC_EkzamenFaculty, m_pSet->m_Faculty, m_pSet);
	DDX_FieldText(pDX, IDC_EkzamenNamee, m_pSet->m_Namee, m_pSet);
	DDX_FieldText(pDX, IDC_EkzamenAvMark, m_pSet->m_AvMark, m_pSet);
	// ����� ��� ������� ������� DDX_Field* ��� ����������� ��������� ���������� � ����� ���� ������, ��������
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// ��� ��������� �������������� �������� ��. ������� MSDN � ODBC
}

BOOL CYakovenko_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �������� ����� Window ��� ����� ����������� ���������
	//  CREATESTRUCT cs

	cs.cy = 640; // width
	cs.cx = 480; // height

	cs.y = 0; // top position
	cs.x = 0; // left position

	return CRecordView::PreCreateWindow(cs);
}

void CYakovenko_4View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_Yakovenko_4Set;
	CRecordView::OnInitialUpdate();

}


// ������ CYakovenko_4View

BOOL CYakovenko_4View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// ���������� �� ���������
	return DoPreparePrinting(pInfo);
}

void CYakovenko_4View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �������� �������������� ������������� ����� �������
}

void CYakovenko_4View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �������� ������� ����� ������
}


// ����������� CYakovenko_4View

#ifdef _DEBUG
void CYakovenko_4View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CYakovenko_4View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CYakovenko_4Doc* CYakovenko_4View::GetDocument() const // �������� ������������ ������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CYakovenko_4Doc)));
	return (CYakovenko_4Doc*)m_pDocument;
}
#endif //_DEBUG


// ��������� ���� ������ CYakovenko_4View
CRecordset* CYakovenko_4View::OnGetRecordset()
{
	return m_pSet;
}



// ����������� ��������� CYakovenko_4View


void CYakovenko_4View::OnRecordAdd()
{
	m_pSet->AddNew();
	m_bAdding = TRUE;
	CEdit* pCtrl = (CEdit*)GetDlgItem(IDC_EkzamenCode);
	int result = pCtrl->SetReadOnly(FALSE);
	UpdateData(FALSE);


}


void CYakovenko_4View::OnRecordDelete()
{
	m_pSet->Delete();
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	if (m_pSet->IsBOF())
		m_pSet->SetFieldNull(NULL);
	UpdateData(FALSE);

}


BOOL CYakovenko_4View::OnMove(unsigned int nIDMoveCommand)
{
	if (m_bAdding) {
		m_bAdding = FALSE;
		UpdateData(TRUE);
		if (m_pSet->CanUpdate())
			m_pSet->Update();
		m_pSet->Requery();
		UpdateData(FALSE);
		CEdit* pCtrl = (CEdit*)GetDlgItem(IDC_EkzamenCode);
		pCtrl->SetReadOnly(TRUE);
		return TRUE;
	}
	else
		return CRecordView::OnMove(nIDMoveCommand);
}


void CYakovenko_4View::OnSortId()
{
	m_pSet->Close();
	m_pSet->m_strSort = "[Code]";
	m_pSet->Open();
	UpdateData(FALSE);
}


void CYakovenko_4View::OnSortAvmark()
{
	m_pSet->Close();
	m_pSet->m_strSort = "[AvMark]";
	m_pSet->Open();
	UpdateData(FALSE);
}


void CYakovenko_4View::OnFilterId()
{
	DoFilter((CString)"[Code]");
}


void CYakovenko_4View::OnFilterAvmark()
{
	DoFilter((CString)"[AvMark]");
}

void CYakovenko_4View::DoFilter(CString col)
{
	CFilterDlg dlg;
	CString str;
	if (dlg.DoModal() == IDOK)
		str = col + (CString)" = " + dlg.m_filterValue;
	m_pSet->m_strFilter = str;
	m_pSet->Requery();
	int recCount = m_pSet->GetRecordCount();
	if (recCount == 0)
	{
		MessageBox((CString)"No matching records.");
		m_pSet->m_strFilter = "";
		m_pSet->Requery();
	}
	m_pSet->MoveFirst();
	UpdateData(FALSE);

}