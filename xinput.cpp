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
        if (Result == ERROR_SUCCESS)
        {
            if (state.Gamepad.wButtons && XINPUT_GAMEPAD_A)
            {
                std::cout << "Button: A" << std::endl;
            }
        }
        Sleep(150);
    }
    return 0;
}
//https://docs.microsoft.com/en-us/windows/win32/api/xinput/ns-xinput-xinput_gamepad
