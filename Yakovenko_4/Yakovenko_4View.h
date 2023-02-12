
// Yakovenko_4View.h : ��������� ������ CYakovenko_4View
//

#pragma once

class CYakovenko_4Set;

class CYakovenko_4View : public CRecordView
{
protected: // ������� ������ �� ������������
	BOOL m_bAdding;

	CYakovenko_4View();
	DECLARE_DYNCREATE(CYakovenko_4View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_YAKOVENKO_4_FORM };
#endif
	CYakovenko_4Set* m_pSet;

// ��������
public:
	CYakovenko_4Doc* GetDocument() const;

// ��������
public:

// ���������������
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // ��������� DDX/DDV
	virtual void OnInitialUpdate(); // ���������� � ������ ��� ����� ������������
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ����������
public:
	virtual ~CYakovenko_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ��������� ������� ����� ���������
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRecordAdd();
	afx_msg void OnRecordDelete();
	virtual BOOL OnMove(unsigned int nIDMoveCommand);
	afx_msg void OnSortId();
	afx_msg void OnSortAvmark();
	afx_msg void OnFilterId();
	afx_msg void OnFilterAvmark();
	void DoFilter(CString col);
};

#ifndef _DEBUG  // ���������� ������ � Yakovenko_4View.cpp
inline CYakovenko_4Doc* CYakovenko_4View::GetDocument() const
   { return reinterpret_cast<CYakovenko_4Doc*>(m_pDocument); }
#endif

