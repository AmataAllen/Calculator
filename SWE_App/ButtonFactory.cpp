#include "ButtonFactory.h"

wxButton* ButtonFactory::CreateButton(wxWindow* parent, const wxString& label, const wxPoint& pos)
{
	return new wxButton(parent, wxID_ANY, label, pos);
}

wxButton* ButtonFactory::CreateNumButton(wxWindow* parent, int num, const wxPoint& pos)
{
	return CreateButton(parent, wxString::Format("%d", num), pos);
}

wxButton* ButtonFactory::CreateAdditionButton(wxWindow* parent, const wxPoint& pos)
{
	return CreateButton(parent, "+", pos);
}

wxButton* ButtonFactory::CreateSubtractionButton(wxWindow* parent, const wxPoint& pos)
{
	return CreateButton(parent, "-", pos);
}

wxButton* ButtonFactory::CreateMultiplicationButton(wxWindow* parent, const wxPoint& pos)
{
	return CreateButton(parent, "*", pos);
}

wxButton* ButtonFactory::CreateDivisionButton(wxWindow* parent, const wxPoint& pos)
{
	return CreateButton(parent, "/", pos);
}

wxButton* ButtonFactory::CreateModuloButton(wxWindow* parent, const wxPoint& pos)
{
	return CreateButton(parent, "%", pos);
}

wxButton* ButtonFactory::CreateSinButton(wxWindow* parent, const wxPoint& pos)
{
	return CreateButton(parent, "sin", pos);
}

wxButton* ButtonFactory::CreateCosButton(wxWindow* parent, const wxPoint& pos)
{
	return CreateButton(parent, "cos", pos);
}

wxButton* ButtonFactory::CreateTanButton(wxWindow* parent, const wxPoint& pos)
{
	return CreateButton(parent, "tan", pos);
}

wxButton* ButtonFactory::CreateEqualsButton(wxWindow* parent, const wxPoint& pos)
{
	return CreateButton(parent, "=", pos);
}

wxButton* ButtonFactory::CreateDeleteButton(wxWindow* parent, const wxPoint& pos)
{
	return CreateButton(parent, "del", pos);
}

wxButton* ButtonFactory::CreateClearButton(wxWindow* parent, const wxPoint& pos)
{
	return CreateButton(parent, "clr", pos);
}

wxButton* ButtonFactory::CreateDecimalButton(wxWindow* parent, const wxPoint& pos)
{
	return CreateButton(parent, ".", pos);
}

wxButton* ButtonFactory::CreateNegativeButton(wxWindow* parent, const wxPoint& pos)
{
	return CreateButton(parent, "-x", pos);
}
