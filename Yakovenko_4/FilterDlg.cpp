// FilterDlg.cpp: файл реализации
//

#include "stdafx.h"
#include "Yakovenko_4.h"
#include "FilterDlg.h"
#include "afxdialogex.h"


// диалоговое окно CFilterDlg

IMPLEMENT_DYNAMIC(CFilterDlg, CDialogEx)

CFilterDlg::CFilterDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, m_filterValue(_T(""))
{

}

CFilterDlg::~CFilterDlg()
{
}

void CFilterDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, ID_FILTERVALUE, m_filterValue);
}


BEGIN_MESSAGE_MAP(CFilterDlg, CDialogEx)
END_MESSAGE_MAP()


// обработчики сообщений CFilterDlg
