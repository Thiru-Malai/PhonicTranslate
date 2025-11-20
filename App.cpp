#include "App.h"
#include "MainFrame.h"
#include "wx/wx.h"

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	MainFrame* mainFrame = new MainFrame("Translate & Learn");
	mainFrame->Show();
	return true;
}