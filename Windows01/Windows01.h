
// Windows01.h: archivo de encabezado principal para la aplicaci�n PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'stdafx.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"		// S�mbolos principales


// CWindows01App:
// Consulte la secci�n Windows01.cpp para obtener informaci�n sobre la implementaci�n de esta clase
//

class CWindows01App : public CWinApp
{
public:
	CWindows01App();

// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementaci�n

	DECLARE_MESSAGE_MAP()
};

extern CWindows01App theApp;