#include <Windows.h>
#include <iostream>
int main()
{
	int health = 9999;
	HWND hwnd = FindWindowA(NULL, "AssaultCube");
	if (hwnd == NULL)
	{
		std::cout << "cant find assualt cube process please open it ";
		exit(-1);
	}
	DWORD ProcessId;
		GetWindowThreadProcessId(hwnd,&ProcessId);
		
		HANDLE procId = OpenProcess(PROCESS_ALL_ACCESS,FALSE,ProcessId);
		if (!ProcessId == true)
		{
			std::cout << "found winodw process\n";
		}
		WriteProcessMemory(procId, (LPVOID)0x05FEC9C, &health,9999,0);
		reinterpret_cast<uintptr_t*>(0x05FEC9C, health, 9999);
		return 0;
}
