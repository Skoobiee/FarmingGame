#define _WIN32_WINNT 0x0502
#include <Windows.h>
#include <iostream>


using namespace std;

int main()
{
	HWND hwnd = GetConsoleWindow();
	if (hwnd != NULL) { SetWindowPos(hwnd, 0, 0, 0, 1000, 1000, SWP_SHOWWINDOW | SWP_NOMOVE); } //1800, 1300







	cin.get();
	return 0;
}