#ifndef CALCULATOR_PROCESSOR_H
#define CALCULATOR_PROCESSOR_H

#include <string>
#include <vector>
#include <wx/wx.h>
class CalculatorProcessor
{
public:
	static CalculatorProcessor& GetInstance();
	double Calculate(const std::string& expression);
private:
	CalculatorProcessor();
	CalculatorProcessor(const CalculatorProcessor&) = delete;
	CalculatorProcessor* operator=(const CalculatorProcessor&) = delete;

	std::vector<double> ParseInput(const wxString& input);
};
#endif

