
// ErrorLoopup.h : главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CErrorLoopupApp:
// О реализации данного класса см. ErrorLoopup.cpp
//

class CErrorLoopupApp : public CWinApp
{
public:
	CErrorLoopupApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CErrorLoopupApp theApp;