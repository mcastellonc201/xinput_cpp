#include <iostream>
#include <windows.h>
#include <xinput.h>
#pragma comment(lib,"xinput.lib")

int main()
{
    XINPUT_KEYSTROKE stroke;

    while (true)
    {
        DWORD Result = XInputGetKeystroke(0, 0, &stroke);
        if (Result == ERROR_SUCCESS)
        {
            if ((stroke.VirtualKey == VK_PAD_A) && (stroke.Flags & XINPUT_KEYSTROKE_KEYDOWN))
            {
                std::cout << "Button: A" << std::endl;
            }
        }
    }
    return 0;
}
//https://docs.microsoft.com/en-us/windows/win32/api/xinput/ns-xinput-xinput_keystroke
