#include <Windows.h>

BOOL APIENTRY DllMain(HMODULE Base, DWORD Callback, LPVOID Param)
{
	switch (Callback)
	{
	case DLL_PROCESS_ATTACH:

		break;
	case DLL_PROCESS_DETACH:

		break;
	default:

		break;
	}
	return 1;
}

extern "C" __declspec(dllexport) int RatosEntry()
{
	return MessageBoxA(0, "Hello World", 0, 0);
}