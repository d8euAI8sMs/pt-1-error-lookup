
// ErrorLoopup.h : ������� ���� ��������� ��� ���������� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"		// �������� �������


// CErrorLoopupApp:
// � ���������� ������� ������ ��. ErrorLoopup.cpp
//

class CErrorLoopupApp : public CWinApp
{
public:
	CErrorLoopupApp();

// ���������������
public:
	virtual BOOL InitInstance();

// ����������

	DECLARE_MESSAGE_MAP()
};

extern CErrorLoopupApp theApp;