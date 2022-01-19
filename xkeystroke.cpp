#include <iostream>
#include <windows.h>
#include <xinput.h>
#pragma comment(lib,"xinput.lib")

int main()
{
    XINPUT_KEYSTROKE stroke;
    do
    {
        DWORD Result = XInputGetKeystroke(0, 0, &stroke);
        if ((stroke.VirtualKey == VK_PAD_A) && (stroke.Flags & XINPUT_KEYSTROKE_KEYDOWN))
        {
            printf("A\n");
        }
    } while ( !(GetAsyncKeyState(VK_ESCAPE) & 0x01) );
    return 0;
}
//https://docs.microsoft.com/en-us/windows/win32/api/xinput/ns-xinput-xinput_keystroke
