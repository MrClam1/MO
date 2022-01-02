#include "pch.h"
#include "MyForm.h"
#include "Class.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace MO;

int main(int argc, char* argv[]) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MO::MyForm form;
	Application::Run(% form);
	return 0;
}