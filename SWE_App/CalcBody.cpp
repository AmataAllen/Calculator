#include "CalcBody.h"

CalcBody::CalcBody() : wxFrame(nullptr, wxID_ANY, "CalculatorBody", wxPoint(100, 100), wxSize(300, 200))
{
	//button1 = new wxButton(this,10001,"Click on Me",wxPoint(50,50),wxSize(75,25));
	//button2 = new wxButton(this, 10002, "No, ME!", wxPoint(50, 100), wxSize(75, 25));
	//textWindow = new wxTextCtrl(this, 10000, wxPoint(50, 50), wxSize(50, 500));
	textWindow = new wxTextCtrl(this, 10000, wxEmptyString, wxPoint(50,50), wxSize(500,100));

	zeroButton = new wxButton(this, 10001, "0", wxPoint(50, 200), wxSize(50, 50));
	oneButton = new wxButton(this, 10002, "1", wxPoint(100, 200), wxSize(50, 50));
	twoButton = new wxButton(this, 10003, "2", wxPoint(150, 200), wxSize(50, 50));

	threeButton = new wxButton(this, 10004, "3", wxPoint(50, 250), wxSize(50, 50));
	fourButton = new wxButton(this, 10005, "4", wxPoint(100, 250), wxSize(50, 50));
	fiveButton = new wxButton(this, 10006, "5", wxPoint(150, 250), wxSize(50, 50));

	sixButton = new wxButton(this, 10007, "6", wxPoint(50, 300), wxSize(50, 50));
	sevenButton = new wxButton(this, 10008, "7", wxPoint(100, 300), wxSize(50, 50));
	eightButton = new wxButton(this, 10009, "8", wxPoint(150, 300), wxSize(50, 50));

	nineButton = new wxButton(this, 10010, "9", wxPoint(100, 350), wxSize(50, 50));

	additionButton = new wxButton(this, 10011, "+", wxPoint(50, 350), wxSize(50, 50));
	subtractionButton = new wxButton(this, 10012, "-", wxPoint(150, 350), wxSize(50, 50));
	multiplicationButton = new wxButton(this, 10013, "*", wxPoint(200, 200), wxSize(50, 50));
	divisionButton = new wxButton(this, 10014, "/", wxPoint(200, 250), wxSize(50, 50));
	moduloButton = new wxButton(this, 10015, "%", wxPoint(200, 300), wxSize(50, 50));

	equalsButton = new wxButton(this, 10016, "=", wxPoint(200, 350), wxSize(50, 50));

	sinButton = new wxButton(this, 10017, "sin", wxPoint(250, 200), wxSize(50, 50));
	cosButton = new wxButton(this, 10018, "cos", wxPoint(250, 250), wxSize(50, 50));
	tanButton = new wxButton(this, 10019, "tan", wxPoint(250, 300), wxSize(50, 50));

	clearButton = new wxButton(this, 10020, "clr", wxPoint(250, 350), wxSize(50, 50));

	delButton = new wxButton(this, 10021, "del", wxPoint(100, 400), wxSize(50, 50));

	decimalButton = new wxButton(this, 10022, ".", wxPoint(150, 400), wxSize(50, 50));

	negativeButton = new wxButton(this, 10023, "-x", wxPoint(200, 400), wxSize(50, 50));




	// repeat above till all buttons are accounted for
}
