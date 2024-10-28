#pragma once
#ifndef BUTTON_FACTORY_H
#define BUTTON_FACTORY_H
#include <wx/wx.h>
class ButtonFactory
{
public:
	static wxButton* CreateButton(wxWindow* parent, const wxString& label, const wxPoint& pos);

	static wxButton* CreateNumButton(wxWindow* parent, int num, const wxPoint& pos);
	static wxButton* CreateAdditionButton(wxWindow* parent, const wxPoint& pos);
	static wxButton* CreateSubtractionButton(wxWindow* parent, const wxPoint& pos);
	static wxButton* CreateMultiplicationButton(wxWindow* parent, const wxPoint& pos);
	static wxButton* CreateDivisionButton(wxWindow* parent, const wxPoint& pos);
	static wxButton* CreateModuloButton(wxWindow* parent, const wxPoint& pos);

	static wxButton* CreateSinButton(wxWindow* parent, const wxPoint& pos);
	static wxButton* CreateCosButton(wxWindow* parent, const wxPoint& pos);
	static wxButton* CreateTanButton(wxWindow* parent, const wxPoint& pos);

	static wxButton* CreateEqualsButton(wxWindow* parent, const wxPoint& pos);

	static wxButton* CreateDeleteButton(wxWindow* parent, const wxPoint& pos);

	static wxButton* CreateClearButton(wxWindow* parent, const wxPoint& pos);

	static wxButton* CreateDecimalButton(wxWindow* parent, const wxPoint& pos);

	static wxButton* CreateNegativeButton(wxWindow* parent, const wxPoint& pos);
};

#endif

