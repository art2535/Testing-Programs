#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Lab021::MyForm form;
	form.MaximizeBox = false;
	form.MinimizeBox = false;
	Application::Run(% form);
	return 0;
}