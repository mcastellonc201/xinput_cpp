#include <windows.h>
#include <stdio.h>
#include <xinput.h>
#pragma comment(lib,"xinput.lib")

int main()
{
	XINPUT_STATE state;
	ZeroMemory(&state, sizeof(XINPUT_STATE));

	while (true)
	{
		DWORD dwResult = XInputGetState(0, &state);
		WORD wButtons = state.Gamepad.wButtons;
		if (wButtons & XINPUT_GAMEPAD_A)
		{
			printf("Button: A\n");
		}
		Sleep(150);
	}
	return 0;
}
