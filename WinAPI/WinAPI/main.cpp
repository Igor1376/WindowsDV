#include<Windows.h>

INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPSTR lpCmdLine, INT nCmdShow)
{
	
	MessageBox(NULL, 
		"Hello Windows!\nThis is MessageBox()", 
		"Window title", 
		MB_CANCELTRYCONTINUE | MB_HELP | MB_DEFBUTTON3);
	return 0;
}