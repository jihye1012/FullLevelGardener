#include "main.h"
#include "game.h"
#include "util.h"

#define UP 72 //위 방향키
#define DOWN 80 //아래 방향키
#define LEFT 75 //왼쪽 방향키
#define RIGHT 77 //오른쪽 방향키
#define SPACE 4 //스페이스바




int main(void)
{
	setConsole();
	while (true) {
		titleDraw();
		int menuCode=menuDraw();
		if (menuCode == 0) {
			//게임시작
		}
		else if (menuCode == 1) {
			//게임종료
			return 0;
		}
		system("cls"); //콘솔창에 모든 글자를 비우고 커서를 0,0으로 초기화함
	}
	

}










                                                                            
