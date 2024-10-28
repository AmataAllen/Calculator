#include "CalculatorProcessor.h"
#include <cmath>
#include <stdexcept>
#include <sstream>
#include <wx/string.h>
#include <wx/tokenzr.h>

CalculatorProcessor& CalculatorProcessor::GetInstance()
{
	static CalculatorProcessor instance;
	return instance;
}

double CalculatorProcessor::Calculate(const std::string& expression)
{

}

std::vector<double> CalculatorProcessor::ParseInput(const wxString& input)
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
