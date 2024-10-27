#include "App.h"

#define MEMORY_LEAK_LINE -1

wxIMPLEMENT_APP(App); // creates a main

App::App()
{
}

App::~App()
{
}

bool App::OnInit()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(MEMORY_LEAK_LINE);
	_CrtDumpMemoryLeaks();

	CalcBody* body = new CalcBody();
	body->Show();

	return true;
}
