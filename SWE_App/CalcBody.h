#pragma once
#include "wx/wx.h"
#include "ButtonFactory.h"
class CalcBody :
    public wxFrame
{
private:
    //wxButton* button1 = nullptr;
    //wxButton* button2 = nullptr;
    wxTextCtrl* textWindow = nullptr;

  /*wxButton* zeroButton = nullptr;
    wxButton* oneButton = nullptr;
    wxButton* twoButton = nullptr;
    wxButton* threeButton = nullptr;
    wxButton* fourButton = nullptr;
    wxButton* fiveButton = nullptr;
    wxButton* sixButton = nullptr;
    wxButton* sevenButton = nullptr;
    wxButton* eightButton = nullptr;
    wxButton* nineButton = nullptr;

    wxButton* additionButton = nullptr;
    wxButton* subtractionButton = nullptr;
    wxButton* multiplicationButton = nullptr;
    wxButton* divisionButton = nullptr;
    wxButton* moduloButton = nullptr;

    wxButton* sinButton = nullptr;
    wxButton* cosButton = nullptr;
    wxButton* tanButton = nullptr;

    wxButton* equalsButton = nullptr;

    wxButton* clearButton = nullptr;

    wxButton* delButton = nullptr;

    wxButton* decimalButton = nullptr;

    wxButton* negativeButton = nullptr;*/
public:
    CalcBody();

    void CreateButton();

    void OnButtonClicked(wxCommandEvent& event);

    /*void OnNumClicked(wxCommandEvent& event);

    void OnBinaryClicked(wxCommandEvent& event);

    void OnDecimalClicked(wxCommandEvent& event);

    void OnNegativeClicked(wxCommandEvent& event);

    void OnUnaryClicked(wxCommandEvent& event);

    void OnEqualsClicked(wxCommandEvent& event);

    void OnClearClicked(wxCommandEvent& event);

    void OnDeleteClicked(wxCommandEvent& event);*/

    std::vector<double> ParseInput(const wxString& input);


    wxDECLARE_EVENT_TABLE();

};

