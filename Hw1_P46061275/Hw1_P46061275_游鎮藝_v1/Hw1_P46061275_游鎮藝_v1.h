
// Hw1_P46061275_������_v1.h : PROJECT_NAME ���ε{�����D�n���Y��
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�� PCH �]�t���ɮ׫e���]�t 'stdafx.h'"
#endif

#include "resource.h"		// �D�n�Ÿ�


// CHw1_P46061275_������_v1App: 
// �аѾ\��@�����O�� Hw1_P46061275_������_v1.cpp
//

class CHw1_P46061275_������_v1App : public CWinApp
{
public:
	CHw1_P46061275_������_v1App();

// �мg
public:
	virtual BOOL InitInstance();

// �{���X��@

	DECLARE_MESSAGE_MAP()
};

extern CHw1_P46061275_������_v1App theApp;