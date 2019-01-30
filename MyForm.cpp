#include "MyForm.h"
#include "GFX_SDL.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <cmath>
#include <ctgmath>

using namespace System;
using namespace System::Windows::Forms;


int main(){

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm Form;
	Application::Run(%Form);

	return 0;

}