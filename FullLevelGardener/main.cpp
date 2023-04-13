#include "main.h"
#include "game.h"
#include "util.h"

#define UP 72 //�� ����Ű �ƽ�Ű�ڵ� 224,72
#define DOWN 80 //�Ʒ� ����Ű �ƽ�Ű�ڵ� 224,80
#define LEFT 75 //���� ����Ű �ƽ�Ű�ڵ� 224,75
#define RIGHT 77 //������ ����Ű �ƽ�Ű�ڵ� 224,77
#define SPACE 4 //�����̽��� 




int main(void)
{
	setConsole();
	
	while (true) {
		titleDraw();
		int menuCode=menuDraw(); 
		if (menuCode == 0) {
			//���ӽ���
			int n = levelListDraw();

			if (n == 0) { //EASY
				cout << " �� EASY ��";
				Sleep(1000); // 1�ʰ� ���� (������ ms�̹Ƿ� 1000=1��)
				gameLoop(0);
				
			}
			else if (n == 1) { // NORMAL
				cout << " �� NORMAL ��";
				Sleep(1000);
				gameLoop(1);
				
			}
			else if (n == 2) { // HARD
				cout << " �� HARD ��";
				Sleep(1000);
				gameLoop(2);
				
			}

		}
		else if (menuCode == 1) {
			//��������
			return 0;
		}
		system("cls"); //�ܼ�â�� ��� ���ڸ� ���� Ŀ���� 0,0���� �ʱ�ȭ��
	}

	return 0;

}










                                                                            
