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
		if (!ProcessId == NULL)
		{
			std::cout << "didnt find winodw process\n";
			exit(-1);
		}
		WriteProcessMemory(procId, (LPVOID)0x05FEC9C, &health,9999,0);
		return 0;
}
