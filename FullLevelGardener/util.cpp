#include "util.h"


void setCursor(int x, int y) //Ŀ���� ������ġ�� ���ִ� �Լ�
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

void setConsole() //ȭ�� ũ�⸦ �����ϴ� �Լ�
{
	system("mode con: cols=143 lines=40");
	system("title Full Level Gardener");
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); //Ŀ�� �����Ÿ� ������
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = false;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
}

void setColor(int forground, int background) { //���� 0~15�� �ش� ���ڻ� ���� ����
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); //�ܼ� �ڵ� ��������
	int code = forground + background * 16;
	SetConsoleTextAttribute(consoleHandle, code);

	}
