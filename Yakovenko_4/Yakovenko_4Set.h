
// Yakovenko_4Set.h: ��������� ������ CYakovenko_4Set
//


#pragma once

// ����������� ��� 3 ������� 2022 �., 1:00

class CYakovenko_4Set : public CRecordset
{
public:
	CYakovenko_4Set(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CYakovenko_4Set)

// ������ ����� � ����������

// ��������� ���� ����� (���� ������������) �������� ����������� ���� ������ 
// ���� ���� ������ - CStringA ��� ����� ������ ANSI � CStringW ��� ����� 
// ������ �������. ��� ������ ������������� ���������� ��������� ODBC 
// ������������ �������� ��������������.  ��� ������� ����� �������� ��� ����� �� 
// ���� CString, � ������� ODBC �������� ��� ����������� ��������������.
// (����������. ���������� ������������ ������� ODBC ������ 3.5 ��� ����� ������� 
// ��� ��������� ��� �������, ��� � ���� ��������������).

	long	m_Code;
	long	m_Group;
	CStringW	m_Faculty;
	CStringW	m_Namee;
	long	m_AvMark;

// ���������������
	// ������ ������ ��������������� ����������� �������
	public:
	virtual CString GetDefaultConnect();	// ������ ����������� �� ���������

	virtual CString GetDefaultSQL(); 	// ��� SQL �� ��������� ��� ������ �������
	virtual void DoFieldExchange(CFieldExchange* pFX);	// ��������� RFX

// ����������
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};

