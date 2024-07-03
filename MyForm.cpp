#include "MyForm.h"
#include "algorithm"
#include "cmath"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main(array<String^>^ args) {
	try {
		Application::SetCompatibleTextRenderingDefault(false);
		Application::EnableVisualStyles();
		Bin::MyForm form;
		Application::Run(% form);
	} catch(ArgumentNullException^){ MessageBox::Show("Выберите систему исчесления", "Ошибка компиляции", MessageBoxButtons::OK, MessageBoxIcon::Error); }
}