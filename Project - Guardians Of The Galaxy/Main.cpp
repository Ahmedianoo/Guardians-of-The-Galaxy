#include <fstream>
#include <iostream>
#include <windows.h>
#include "Game.h"
#include <mmsystem.h>
using namespace std;
#pragma comment(lib, "Winmm.lib")
int main()
{	
	PlaySound(TEXT("Sound1.wav"), NULL, SND_FILENAME | SND_ASYNC);
	srand(time(NULL));
	SetConsoleOutputCP(CP_UTF8);
	Game* Control = new Game();
	Control->Simulate();
	return 0;
}



