// Proyecto_Integrador.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include "login.h"

using namespace Proyecto_Integrador;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Habilitar los efectos visuales de Windows XP antes de crear ningún control
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Crear la ventana principal y ejecutarla
	Application::Run(gcnew login());
	return 0;
}
