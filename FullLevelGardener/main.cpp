#include "main.h"
#include "game.h"
#include "util.h"

#define UP 72 //�� ����Ű
#define DOWN 80 //�Ʒ� ����Ű
#define LEFT 75 //���� ����Ű
#define RIGHT 77 //������ ����Ű
#define SPACE 4 //�����̽���




int main(void)
{
	setConsole();
	while (true) {
		titleDraw();
		int menuCode=menuDraw();
		if (menuCode == 0) {
			//���ӽ���
		}
		else if (menuCode == 1) {
			//��������
			return 0;
		}
		system("cls"); //�ܼ�â�� ��� ���ڸ� ���� Ŀ���� 0,0���� �ʱ�ȭ��
	}
	

}










                                                                            
