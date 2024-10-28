#include "CalcBody.h"
#include <wx/string.h>
#include <wx/tokenzr.h>
#include <vector>

wxBEGIN_EVENT_TABLE(CalcBody, wxFrame)
EVT_BUTTON(wxID_ANY, CalcBody::OnButtonClicked)
//EVT_BUTTON(10002, CalcBody::OnNumClicked)
//EVT_BUTTON(10003, CalcBody::OnNumClicked)
//EVT_BUTTON(10004, CalcBody::OnNumClicked)
//EVT_BUTTON(10005, CalcBody::OnNumClicked)
//EVT_BUTTON(10006, CalcBody::OnNumClicked)
//EVT_BUTTON(10007, CalcBody::OnNumClicked)
//EVT_BUTTON(10008, CalcBody::OnNumClicked)
//EVT_BUTTON(10009, CalcBody::OnNumClicked)
//EVT_BUTTON(10010, CalcBody::OnNumClicked)
//EVT_BUTTON(wxID_ANY, CalcBody::OnBinaryClicked)
//EVT_BUTTON(10012, CalcBody::OnBinaryClicked)
//EVT_BUTTON(10013, CalcBody::OnBinaryClicked)
//EVT_BUTTON(10014, CalcBody::OnBinaryClicked)
//EVT_BUTTON(10015, CalcBody::OnBinaryClicked)
//EVT_BUTTON(10016, CalcBody::OnEqualsClicked)
//EVT_BUTTON(10017, CalcBody::OnUnaryClicked)
//EVT_BUTTON(10018, CalcBody::OnUnaryClicked)
//EVT_BUTTON(10019, CalcBody::OnUnaryClicked)
//EVT_BUTTON(10020, CalcBody::OnClearClicked)
//EVT_BUTTON(10021, CalcBody::OnDeleteClicked)
//EVT_BUTTON(10022, CalcBody::OnDecimalClicked)
//EVT_BUTTON(10023, CalcBody::OnNegativeClicked)
wxEND_EVENT_TABLE()

CalcBody::CalcBody() : wxFrame(nullptr, wxID_ANY, "CalculatorBody", wxPoint(100, 100), wxSize(300, 200))
{
	//button1 = new wxButton(this,10001,"Click on Me",wxPoint(50,50),wxSize(75,25));
	//button2 = new wxButton(this, 10002, "No, ME!", wxPoint(50, 100), wxSize(75, 25));
	//textWindow = new wxTextCtrl(this, 10000, wxPoint(50, 50), wxSize(50, 500));
	textWindow = new wxTextCtrl(this, 10000, wxEmptyString, wxPoint(50,50), wxSize(500,100));

	/*zeroButton = ButtonFactory::CreateAdditionButton(this, wxPoint(50, 50));
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

	negativeButton = new wxButton(this, 10023, "-x", wxPoint(200, 400), wxSize(50, 50));*/



	// repeat above till all buttons are accounted for
}

void CalcBody::CreateButton()
{
	int buttonWidth = 50;
	int buttonHeight = 50;
	int posX = 50;
	int posY = 200;

	for (int currNum = 0; currNum <= 9; currNum++)
	{
		wxButton* numButton = ButtonFactory::CreateNumButton(this, currNum, wxPoint(posX, posY));

		posX += 50;
		if ((currNum + 1) % 3 == 0)
		{
			posX = 50;
			posY += 50;
		}
	}
	wxButton* additionButton = ButtonFactory::CreateAdditionButton(this, wxPoint(50, 350));
	wxButton* subtractionButton = ButtonFactory::CreateSubtractionButton(this, wxPoint(150, 350));
	wxButton* multiplicationButton = ButtonFactory::CreateMultiplicationButton(this, wxPoint(200, 200));
	wxButton* divisionButton = ButtonFactory::CreateDivisionButton(this, wxPoint(200, 250));
	wxButton* moduloButton = ButtonFactory::CreateModuloButton(this, wxPoint(200, 300));

	wxButton* equalsButton = ButtonFactory::CreateEqualsButton(this, wxPoint(200, 350));

	wxButton* sinButton = ButtonFactory::CreateSinButton(this, wxPoint(250, 200));
	wxButton* cosButton = ButtonFactory::CreateCosButton(this, wxPoint(250, 250));
	wxButton* tanButton = ButtonFactory::CreateTanButton(this, wxPoint(250, 300));

	wxButton* clearButton = ButtonFactory::CreateClearButton(this, wxPoint(250, 350));

	wxButton* delButton = ButtonFactory::CreateDeleteButton(this, wxPoint(100, 400));

	wxButton* decimalButton = ButtonFactory::CreateDecimalButton(this, wxPoint(150, 400));

	wxButton* negativeButton = ButtonFactory::CreateNegativeButton(this, wxPoint(200, 400));

	sinButton->Bind(wxEVT_BUTTON, &CalcBody::OnUnaryClicked, this);
	cosButton->Bind(wxEVT_BUTTON, &CalcBody::OnUnaryClicked, this);
	tanButton->Bind(wxEVT_BUTTON, &CalcBody::OnUnaryClicked, this);
	clearButton->Bind(wxEVT_BUTTON, &CalcBody::OnClearClicked, this);
	delButton->Bind(wxEVT_BUTTON, &CalcBody::OnDeleteClicked, this);
	decimalButton->Bind(wxEVT_BUTTON, &CalcBody::OnDecimalClicked, this);
	negativeButton->Bind(wxEVT_BUTTON, &CalcBody::OnNegativeClicked, this);
	
}

void CalcBody::OnButtonClicked(wxCommandEvent& event)
{
}

//void CalcBody::OnNumClicked(wxCommandEvent& event)
//{
//	int num = event.GetId() - 10001;
//	textWindow->AppendText(std::to_string(num));
//}

void CalcBody::OnBinaryClicked(wxCommandEvent& event)
{
	if (event.GetId() == 10011)
	{
		textWindow->AppendText("+");
	}
	if (event.GetId() == 10012)
	{
		textWindow->AppendText("-");
	}
	if (event.GetId() == 10013)
	{
		textWindow->AppendText("*");
	}
	if (event.GetId() == 10014)
	{
		textWindow->AppendText("/");
	}
	if (event.GetId() == 10015)
	{
		textWindow->AppendText("%");
	}

}

void CalcBody::OnDecimalClicked(wxCommandEvent& event)
{
	textWindow->AppendText(".");
}

void CalcBody::OnNegativeClicked(wxCommandEvent& event)
{
	textWindow->AppendText("-");
}

void CalcBody::OnUnaryClicked(wxCommandEvent& event)
{
	if (event.GetId() == 10017)
	{
		textWindow->AppendText("sin");
	}
	if (event.GetId() == 10018)
	{
		textWindow->AppendText("cos");
	}
	if (event.GetId() == 10019)
	{
		textWindow->AppendText("tan");
	}
}

void CalcBody::OnEqualsClicked(wxCommandEvent& event)
{
	wxString text = textWindow->GetValue();
	std::vector<double>nums = ParseInput(text);

	std::vector<wxChar> operators;

	for (char c : text)
	{
		if (c == '+' or c == '-' or c == '*' or c == '/' or c == '%')
		{
			operators.push_back(c);
		}
	}
	if (nums.size() - 1 != operators.size())
	{
		textWindow->SetValue("SYNTAXERROR");
		return;
	}

	double result = nums[0];

	for (size_t currDigit = 0; currDigit < operators.size(); currDigit++)
	{
		wxChar op = operators[currDigit];
		double nextNum = nums[currDigit + 1];

		switch (op)
		{
		case '+':
		{
			result += nextNum;
			break;
		}
		case '-':
		{
			result -= nextNum;
			break;
		}
		case '*':
		{
			result *= nextNum;
			break;
		}
		case '/':
		{
			if (nextNum == 0)
			{
				textWindow->SetValue("SYNTAXERROR: CANNOT DIVIDE BY ZERO");
				return;
			}
			result /= nextNum;
			break;
		}
		case '%':
		{
			if (nextNum == 0)
			{
				textWindow->SetValue("SYNTAXERROR: CANNOT MOD BY ZERO");
				return;
			}
			result = static_cast<int>(result) & static_cast<int>(nextNum);
			break;
		}
		default:
			break;
		}
	}
	if (result == static_cast<int>(result))
	{
		textWindow->SetValue(wxString::Format("%d", static_cast<int>(result)));
	}
	else
	{
		textWindow->SetValue(wxString::Format("%.2f", result));
	}


}

void CalcBody::OnClearClicked(wxCommandEvent& event)
{
	textWindow->Clear();
}

void CalcBody::OnDeleteClicked(wxCommandEvent& event)
{
	wxString text = textWindow->GetValue();
	if (!text.IsEmpty())
	{
		text.RemoveLast();
		textWindow->SetValue(text);
	}
}

std::vector<double> CalcBody::ParseInput(const wxString& input)
{
	wxStringTokenizer tokenizer(input, "+-*/%");
	std::vector<double> nums;
	wxString token;

	while (tokenizer.HasMoreTokens())
	{
		token = tokenizer.GetNextToken();

		nums.push_back(wxAtof(token));
	}
	return nums;
}

//void CalcBody::OnEqualsClicked(wxCommandEvent& event)
//{
//}
