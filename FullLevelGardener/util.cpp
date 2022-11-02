#include "util.h"


void setCursor(int x, int y) //커서를 지정위치에 놔주는 함수
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

void setConsole() //화면 크기를 조정하는 함수
{
	system("mode con: cols=143 lines=40");
	system("title Full Level Gardener");
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); //커서 깜빡거림 없애줌
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 0;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
}