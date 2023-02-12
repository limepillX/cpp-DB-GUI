
// Yakovenko_4Doc.h : ��������� ������ CYakovenko_4Doc
//


#pragma once
#include "Yakovenko_4Set.h"


class CYakovenko_4Doc : public CDocument
{
protected: // ������� ������ �� ������������
	CYakovenko_4Doc();
	DECLARE_DYNCREATE(CYakovenko_4Doc)

// ��������
public:
	CYakovenko_4Set m_Yakovenko_4Set;

// ��������
public:

// ���������������
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ����������
public:
	virtual ~CYakovenko_4Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ��������� ������� ����� ���������
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ��������������� �������, �������� ���������� ������ ��� ����������� ������
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
