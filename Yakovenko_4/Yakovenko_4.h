
// Yakovenko_4.h : ������� ���� ��������� ��� ���������� Yakovenko_4
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"       // �������� �������


// CYakovenko_4App:
// � ���������� ������� ������ ��. Yakovenko_4.cpp
//

class CYakovenko_4App : public CWinApp
{
public:
	CYakovenko_4App();


// ���������������
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ����������
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CYakovenko_4App theApp;
