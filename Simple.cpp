#include <Windows.h>
#include <iostream>

int main()
{
    HWND ng_window = FindWindowA(NULL, "Gamehere");
    DWORD window_thread = 0;
    GetWindowThreadProcessId(ng_window, &window_thread);

    DWORD Whateveryouwanttoput = 0;
    HANDLE ng_window = OpenProcess(PROCESS_ALL_ACCESS, FALSE, Whateveryouwanttoput);

     DWORD newValue = 0;

    WriteProcessMemory(hProcess,(LPCVOID*)(base + addressyouwantoput),&newValue,sizeof(newValue));
}
