#include "MainFrame.h"
#include "wx/wx.h"

enum ELEMENT_IDS {
	SOURCE,
	TARGET,
	SOURCE_LIST,
	TARGET_LIST,

};

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, "Phonic Translate", wxDefaultPosition, wxSize(800, 500)) {
	wxPanel* panel = new wxPanel(this);

	wxStaticText* sourceLang = new wxStaticText(panel, wxID_ANY, "Source Language", wxPoint(50, 50), wxDefaultSize);
	wxStaticText* targetLang = new wxStaticText(panel, wxID_ANY, "Target Language", wxPoint(50, 80), wxDefaultSize);

	wxChoice* sourceListBox = new wxChoice(panel, SOURCE_LIST, wxPoint(150, 50), wxDefaultSize, languageArray);
	wxChoice* targetListBox = new wxChoice(panel, TARGET_LIST, wxPoint(150, 80), wxDefaultSize, languageArray);

	wxStaticText* source = new wxStaticText(panel, wxID_ANY, "Source", wxPoint(50, 120), wxDefaultSize);
	wxTextCtrl* sourceArea = new wxTextCtrl(panel, SOURCE, "", wxPoint(50, 150), wxSize(260, 60), wxTE_MULTILINE);


	wxStaticText* target = new wxStaticText(panel, wxID_ANY, "Target", wxPoint(50, 230), wxDefaultSize);
	wxTextCtrl* targetArea = new wxTextCtrl(panel, TARGET, "", wxPoint(50, 260), wxSize(260, 60), wxTE_MULTILINE);

}