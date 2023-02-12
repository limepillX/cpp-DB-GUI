
// Yakovenko_4Set.cpp : ���������� ������ CYakovenko_4Set
//

#include "stdafx.h"
#include "Yakovenko_4.h"
#include "Yakovenko_4Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ���������� CYakovenko_4Set

// ����������� ��� 3 ������� 2022 �., 1:00

IMPLEMENT_DYNAMIC(CYakovenko_4Set, CRecordset)

CYakovenko_4Set::CYakovenko_4Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_Code = 0;
	m_Group = 0;
	m_Faculty = L"";
	m_Namee = L"";
	m_AvMark = 0;
	m_nFields = 5;
	m_nDefaultType = dynaset;
}
// ��������� ������ ����������� ����� ��������� ��������������� ������ ��� 
// ������ ���������������� ����������. ������� #error ����� ��������� ������ ����������� 
// � ����� ������������. ��������, 
// ����������� ��������� ������ � ������ ���� ��� ������������ ������ ��������������.
CString CYakovenko_4Set::GetDefaultConnect()
{
	return _T("DSN=maindb;DBQ=C:\\Users\\justacold\\Desktop\\db1.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CYakovenko_4Set::GetDefaultSQL()
{
	return _T("[Eksamens]");
}

void CYakovenko_4Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// ����� �������, ��� RFX_Text() � RFX_Int(), ������� �� ���� 
// ���������� �����, � �� �� ���� ���� � ���� ������.
// ODBC ��������� ������� ������������� ������������� �������� ������� � ������� ����
	RFX_Long(pFX, _T("[Code]"), m_Code);
	RFX_Long(pFX, _T("[Group]"), m_Group);
	RFX_Text(pFX, _T("[Faculty]"), m_Faculty);
	RFX_Text(pFX, _T("[Namee]"), m_Namee);
	RFX_Long(pFX, _T("[AvMark]"), m_AvMark);

}
/////////////////////////////////////////////////////////////////////////////
// CYakovenko_4Set �����������

#ifdef _DEBUG
void CYakovenko_4Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CYakovenko_4Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

