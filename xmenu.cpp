#include <iostream>
#include <windows.h>
#include <xinput.h>
#pragma comment(lib,"xinput.lib")

int main()
{
    XINPUT_KEYSTROKE stroke;

    system("color 1f");
    system("mode con: cols=80 lines=25");
    SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);

    system("cls");
    printf("\n");
    printf(" =================\n");
    printf("       MENU\n");
    printf(" =================\n");
    printf("  A: GAME01.CMD\n");
    printf("  B: GAME02.CMD\n");
    printf("  X: GAME03.CMD\n");
    printf("  Y: GAME04.CMD\n");
    printf("  -: REBOOT.CMD\n");
    printf("  +: POWEROFF.CMD\n");
    printf(" =================\n");
    printf("\n");

    do
    {
        DWORD Result = XInputGetKeystroke(0, 0, &stroke);
        if ((stroke.VirtualKey == VK_PAD_A) && (stroke.Flags & XINPUT_KEYSTROKE_KEYDOWN))
        {
            system("cls");
            system("game01.cmd");
            system("cls");
            printf("\n");
            printf(" =================\n");
            printf("       MENU\n");
            printf(" =================\n");
            printf("  A: GAME01.CMD\n");
            printf("  B: GAME02.CMD\n");
            printf("  X: GAME03.CMD\n");
            printf("  Y: GAME04.CMD\n");
            printf("  -: REBOOT.CMD\n");
            printf("  +: POWEROFF.CMD\n");
            printf(" =================\n");
            printf("\n");

        }
        else if ((stroke.VirtualKey == VK_PAD_B) && (stroke.Flags & XINPUT_KEYSTROKE_KEYDOWN))
        {
            system("cls");
            system("game02.cmd");
            system("cls");
            printf("\n");
            printf(" =================\n");
            printf("       MENU\n");
            printf(" =================\n");
            printf("  A: GAME01.CMD\n");
            printf("  B: GAME02.CMD\n");
            printf("  X: GAME03.CMD\n");
            printf("  Y: GAME04.CMD\n");
            printf("  -: REBOOT.CMD\n");
            printf("  +: POWEROFF.CMD\n");
            printf(" =================\n");
            printf("\n");

        }
        else if ((stroke.VirtualKey == VK_PAD_X) && (stroke.Flags & XINPUT_KEYSTROKE_KEYDOWN))
        {
            system("cls");
            system("game03.cmd");
            system("cls");
            printf("\n");
            printf(" =================\n");
            printf("       MENU\n");
            printf(" =================\n");
            printf("  A: GAME01.CMD\n");
            printf("  B: GAME02.CMD\n");
            printf("  X: GAME03.CMD\n");
            printf("  Y: GAME04.CMD\n");
            printf("  -: REBOOT.CMD\n");
            printf("  +: POWEROFF.CMD\n");
            printf(" =================\n");
            printf("\n");

        }
        else if ((stroke.VirtualKey == VK_PAD_Y) && (stroke.Flags & XINPUT_KEYSTROKE_KEYDOWN))
        {
            system("cls");
            system("game04.cmd");
            system("cls");
            printf("\n");
            printf(" =================\n");
            printf("       MENU\n");
            printf(" =================\n");
            printf("  A: GAME01.CMD\n");
            printf("  B: GAME02.CMD\n");
            printf("  X: GAME03.CMD\n");
            printf("  Y: GAME04.CMD\n");
            printf("  -: REBOOT.CMD\n");
            printf("  +: POWEROFF.CMD\n");
            printf(" =================\n");
            printf("\n");

        }
        else if ((stroke.VirtualKey == VK_PAD_BACK) && (stroke.Flags & XINPUT_KEYSTROKE_KEYDOWN))
        {
            system("cls");
            system("REBOOT.cmd");

        }
        else if ((stroke.VirtualKey == VK_PAD_START) && (stroke.Flags & XINPUT_KEYSTROKE_KEYDOWN))
        {
            system("cls");
            system("POWEROFF.cmd");
        }
        Sleep(10);

    } while (!(GetAsyncKeyState(VK_ESCAPE) & 0x01));
    return 0;
}
/*
Value 	Description
VK_PAD_A 	A button
VK_PAD_B 	B button
VK_PAD_X 	X button
VK_PAD_Y 	Y button
VK_PAD_RSHOULDER 	Right shoulder button
VK_PAD_LSHOULDER 	Left shoulder button
VK_PAD_LTRIGGER 	Left trigger
VK_PAD_RTRIGGER 	Right trigger
VK_PAD_DPAD_UP 	Directional pad up
VK_PAD_DPAD_DOWN 	Directional pad down
VK_PAD_DPAD_LEFT 	Directional pad left
VK_PAD_DPAD_RIGHT 	Directional pad right
VK_PAD_START 	START button
VK_PAD_BACK 	BACK button
VK_PAD_LTHUMB_PRESS 	Left thumbstick click
VK_PAD_RTHUMB_PRESS 	Right thumbstick click
VK_PAD_LTHUMB_UP 	Left thumbstick up
VK_PAD_LTHUMB_DOWN 	Left thumbstick down
VK_PAD_LTHUMB_RIGHT 	Left thumbstick right
VK_PAD_LTHUMB_LEFT 	Left thumbstick left
VK_PAD_LTHUMB_UPLEFT 	Left thumbstick up and left
VK_PAD_LTHUMB_UPRIGHT 	Left thumbstick up and right
VK_PAD_LTHUMB_DOWNRIGHT 	Left thumbstick down and right
VK_PAD_LTHUMB_DOWNLEFT 	Left thumbstick down and left
VK_PAD_RTHUMB_UP 	Right thumbstick up
VK_PAD_RTHUMB_DOWN 	Right thumbstick down
VK_PAD_RTHUMB_RIGHT 	Right thumbstick right
VK_PAD_RTHUMB_LEFT 	Right thumbstick left
VK_PAD_RTHUMB_UPLEFT 	Right thumbstick up and left
VK_PAD_RTHUMB_UPRIGHT 	Right thumbstick up and right
VK_PAD_RTHUMB_DOWNRIGHT 	Right thumbstick down and right
VK_PAD_RTHUMB_DOWNLEFT 	Right thumbstick down and left
*/
