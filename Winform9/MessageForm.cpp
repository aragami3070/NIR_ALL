#include "MessageForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void MessageForm(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Winform9::MessageForm form;
	Application::Run(% form);

}
