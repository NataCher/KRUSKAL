#include "MyForm.h"
#include "MyFormDialog.h"
#include "MyFormDialog2.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	KRUSKAL::MyForm form;
	Application::Run(% form);
}



