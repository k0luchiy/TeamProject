#include "MenuForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(true);
	TeamProject::MenuForm menu_form;
	Application::Run(%menu_form);
}