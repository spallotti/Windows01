
// Windows01Dlg.h: archivo de encabezado
//

#pragma once


// Cuadro de di�logo de CWindows01Dlg
class CWindows01Dlg : public CDialogEx
{
// Construcci�n
public:
	CWindows01Dlg(CWnd* pParent = NULL);	// Constructor est�ndar

// Datos del cuadro de di�logo
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_WINDOWS01_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Compatibilidad con DDX/DDV


// Implementaci�n
protected:
	HICON m_hIcon;

	// Funciones de asignaci�n de mensajes generadas
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
