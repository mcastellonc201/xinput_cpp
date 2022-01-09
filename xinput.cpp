#include <iostream>
#include <windows.h>
#include <xinput.h>
#pragma comment(lib,"xinput.lib")

int main()
{
	XINPUT_STATE state;

	while (true)
	{
		DWORD Result = XInputGetState(0, &state);
		if (state.Gamepad.wButtons & XINPUT_GAMEPAD_A)
		{
			std::cout << "Button: A\n";
		}
		Sleep(150);
	}
	return 0;
}
