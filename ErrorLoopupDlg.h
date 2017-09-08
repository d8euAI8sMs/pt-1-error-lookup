
// ErrorLoopupDlg.h : ���� ���������
//

#pragma once
#include "afxwin.h"


// ���������� ���� CErrorLoopupDlg
class CErrorLoopupDlg : public CDialogEx
{
// ��������
public:
	CErrorLoopupDlg(CWnd* pParent = NULL);	// ����������� �����������

// ������ ����������� ����
	enum { IDD = IDD_ERRORLOOPUP_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// ��������� DDX/DDV


// ����������
protected:
	HICON m_hIcon;

	// ��������� ������� ����� ���������
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	DWORD dwErrorCode;
	CString mErrorLog;
	afx_msg void OnBnClickedButton1();
	CEdit mLogEditCtrl;
};
