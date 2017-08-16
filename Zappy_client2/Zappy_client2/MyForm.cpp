#include "MyForm.h"

int main()
{
	HWND hwnd = GetConsoleWindow(); // desactive le terminal
	ShowWindow(hwnd, 0); // pareil
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Zappy_client2::MyForm form;
	Application::Run(%form);

	return 0;
}