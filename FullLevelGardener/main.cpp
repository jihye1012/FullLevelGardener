#include "main.h"
#include "game.h"
#include "util.h"

#define UP 72 //위 방향키 아스키코드 224,72
#define DOWN 80 //아래 방향키 아스키코드 224,80
#define LEFT 75 //왼쪽 방향키 아스키코드 224,75
#define RIGHT 77 //오른쪽 방향키 아스키코드 224,77
#define SPACE 4 //스페이스바 




int main(void)
{
	setConsole();
	
	while (true) {
		titleDraw();
		int menuCode=menuDraw(); 
		if (menuCode == 0) {
			//게임시작
			int n = levelListDraw();

			if (n == 0) { //EASY
				cout << " → EASY ←";
				Sleep(1000); // 1초간 정지 (단위가 ms이므로 1000=1초)
				gameLoop(0);
				
			}
			else if (n == 1) { // NORMAL
				cout << " → NORMAL ←";
				Sleep(1000);
				gameLoop(1);
				
			}
			else if (n == 2) { // HARD
				cout << " → HARD ←";
				Sleep(1000);
				gameLoop(2);
				
			}

		}
		else if (menuCode == 1) {
			//게임종료
			return 0;
		}
		system("cls"); //콘솔창에 모든 글자를 비우고 커서를 0,0으로 초기화함
	}

	return 0;

}










                                                                            
