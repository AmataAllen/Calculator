#pragma once
#include "wx/wx.h"
#include "CalcBody.h"
class App : public wxApp
{
private:

public:
	App();
	~App();
	virtual bool OnInit();
};

