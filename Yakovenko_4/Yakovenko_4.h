
// Yakovenko_4.h : главный файл заголовка для приложения Yakovenko_4
//
#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"       // основные символы


// CYakovenko_4App:
// О реализации данного класса см. Yakovenko_4.cpp
//

class CYakovenko_4App : public CWinApp
{
public:
	CYakovenko_4App();


// Переопределение
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Реализация
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CYakovenko_4App theApp;
