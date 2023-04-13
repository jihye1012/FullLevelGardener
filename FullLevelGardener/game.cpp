#include "game.h"
#include "util.h"

char tempMap[20][20]; //�ӽ����� �迭

char map[27][50] = {  // �ܼ�â�� �߰��� ��  50 X 27 
	{"1111111111111111111111111111111111111111111111111"},
	{"1000000000000000000000000000000000000000000000001"},
	{"100s000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1000000000000000000000000000000000000000000000001"},
	{"1111111111111111111111111111111111111111111111111"},
};
char startGrass[20][20] = { //�ܵ� 20 X 20
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"}
	
};

char map1[20][20] = { //�ܵ� 20 X 20
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"}

};

char map2[20][20] = { //�ܵ� 20 X 20
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"}

};

char map3[20][20] = { //�ܵ� 20 X 20
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"},
	{"gggggggggggggggggg"}

};

void drawMap(int* x, int* y) {
	system("mode con: cols=98 lines=29");
	system("cls");
	int height, weight;
	cout << endl;
	for (height = 0; height < 27; height++) { //�� ���� ���̱���
		for (weight = 0; weight < 50; weight++) { 

			char temp = map[height][weight];

			if (temp == '0') {
				setColor(black, black);
				cout << "  ";  //�����
			}
			else if (temp == '1') {
				setColor(green, green);
				cout << "��";  //��
			}
			else if (temp == 's') {
				*x = weight;
				*y = height;

				setColor(white, black);
				cout << "��";  //�÷��̾�
			}
		}
		cout << endl;
	}

	int gy = 5; //grass�迭 ��� y��
	setCursor(27, gy);
	setColor(green, black); //�ܵ� ��

	for (height = 0; height < 20; height++) { //�ܵ� 20 X 20 ��� 2�� for�� 
		for (weight = 0; weight < 20; weight++) {
			cout << "��";
		}
		setCursor(27, gy++);  //���ٿ� 20�� ����ϰ� Ŀ���� �����ٷ� ����
	}

	setColor(white, black); //�⺻ �������� ����
	Sleep(3000);
}

void drawUI(int* x, int* y) {
	setColor(white, black);
	setCursor(5, 30);
	cout << "���� �ð�";

}

void move(int* x, int* y, int _x, int _y) {  //x,y�� ���� ��ǥ�� ������ִ� ���� �޸� �ּ�, _x,_y�� �󸶳� �̵����� ��
	char mapObject = tempMap[*y + _y][*x + _x]; //�̵���Ű�� ���� �̵��� ��ġ�� �� �����Ͱ� �����
	setColor(white, black); //�� �⺻��

	//if (mapObject == '0' || mapObject=='g') { //�� ������ ���� �����̵��� ����
		setCursor(*x, *y);
		cout << "  "; //�����

		setColor(white, black); //�÷��̾� ��
		setCursor(*x + _x, *y + _y); //������ ��ġ�� �̵� �� ���
		cout << "��";

		*x += _x; //���� ��ǥ�� �ݿ�
		*y += _y;
}

void gameLoop(int mapCode) {
	int x, y; //�÷��̾� ��ǥ ���� ����
	int playing = 1;  //1 ����, 0 ����

	if (mapCode == 0) { //�����
		memcpy(tempMap, map1, sizeof(tempMap));   //������ ����, ������ ����, ũ��
	}
	else if (mapCode == 1) { //�����
		memcpy(tempMap, map2, sizeof(tempMap));
	}
	else if (mapCode == 2) { //������
		memcpy(tempMap, map3, sizeof(tempMap));
	}

	drawMap(&x, &y); //�ʿ� ��ǥ ������ ����

	while (playing) {
		switch (keyControl()) {
		case UP:
			move(&x, &y, 0, -1); //y�� 0���� ���� ���ϱ� -1
			break;

		case DOWN:
			move(&x, &y, 0, 1); //y�� 0���� �Ʒ��� ���ϱ� +1
			break;

		case RIGHT:
			move(&x, &y, 1, 0); //x�� 0���� ���������� ���ϱ� +1
			break;

		case LEFT:
			move(&x, &y, -1, 0); //x�� 0���� �������� ���ϱ� -1
			break;

		case SPACE:
			playing = 0; //���� �ݺ� ����
		}
	}
}

int levelListDraw() 
{
	system("mode con: cols=70 lines=30"); //���̵� ���ý� ������ ���� ���� �����ؼ� ����
	int x = 32;
	int y = 13;

	system("cls");
	setCursor(x -3, y -10); //64, 6
	setColor(yellow, black);
	cout << "�� LEVEL ��" << endl;

	setColor(white, black);
	setCursor(x -4, y ); //67, 16
	cout << ">   EASY ��" << endl;

	setCursor(x , y +1); //66, 17
	cout << "NORMAL ��" << endl;

	setColor(red, black);
	setCursor(x,  y+2); //67, 18
	cout << "HARD ��" << endl;

	setColor(white, black);
	setCursor(x , y +3); //66, 19
	cout << "BACK..." << endl;
	//y�� ���� 16~19 16 17 18 19
	setCursor(x - 4, y);
	while (1)
	{
		int n = keyControl();
		switch (n)
		{
		case UP:
			if (y > 13) {
				setCursor(x - 4 ,y);
				cout << " ";
				setCursor(x - 4, --y);
				cout << ">";
			}
			break;
		case DOWN:
			if (y < 16) {
				setCursor(x - 4, y);
				cout << " ";
				setCursor(x - 4, ++y);
				cout << ">";
			}
			break;
		case SPACE:
			setColor(white, black);
			return y - 13;
			break;
		}
	}
}

int keyControl() //����Ű ��Ʈ�� �Լ�
{
	char input;  //���͸� ������ �ʾƵ� �ٷ� �ԷµǴ� �Լ�
	while (true) {
		input = _getch();
		if (input == 224) {  //
			input = _getch();
		}
		else if (input == ' ') {
			return SPACE;
		}
		if (input == UP)
		{
			return UP;
		}
		else if (input == DOWN)
		{
			return DOWN;
		}
		else if (input == LEFT)
		{
			return LEFT;
		}
		else if (input == RIGHT)
		{
			return RIGHT;
		}
	}

}

void titleDraw() //Ÿ��Ʋ ȭ���� ��Ÿ���ִ� �Լ�
{
	cout << endl << endl<<endl;
	setColor(lightgreen,black);
	cout << "	 oooooooooooo ooooo     ooo ooooo        ooooo             ooooo        oooooooooooo oooooo     oooo oooooooooooo ooooo			" << endl;
	cout << "	`888'     `8 `888'     `8' `888'        `888'             `888'        `888'     `8  `888.     .8'  `888'     `8 `888'			" << endl;
	cout << "	 888          888       8   888          888               888          888           `888.   .8'    888          888			" << endl;
	cout << "	 888oooo8     888       8   888          888               888          888oooo8       `888. .8'     888oooo8     888			" << endl;
	cout << "	 888          888       8   888          888               888          888             `888.8'      888          888			" << endl;
	cout << "	 888          `88.    .8'   888       o  888       o       888       o  888       o      `888'       888       o  888       o	" << endl;
	cout << "	o888o           `YbodP'    o888ooooood8 o888ooooood8      o888ooooood8 o888ooooood8       `8'       o888ooooood8 o888ooooood8	" << endl;
	cout << endl;
	cout << "		   .oooooo.          .o.       ooooooooo.   oooooooooo.   oooooooooooo ooooo      ooo oooooooooooo ooooooooo.   " << endl;
	cout << "		 d8P'  `Y8b        .888.      `888   `Y88. `888'   `Y8b  `888'     `8 `888b.     `8' `888'     `8 `888   `Y88. " << endl;
	cout << "		888               .8 888.      888   .d88'  888      888  888          8 `88b.    8   888          888   .d88'" << endl;
	cout << "		888              .8' `888.     888ooo88P'   888      888  888oooo8     8   `88b.  8   888oooo8     888ooo88P'  " << endl;
	cout << "		888     ooooo   .88ooo8888.    888`88b.     888      888  888          8     `88b.8   888          888`88b." << endl;
	cout << "		`88.    .88'   .8'     `888.   888  `88b.   888     d88'  888       o  8       `888   888       o  888  `88b.  " << endl;
	cout << "		 `Y8bood8P'   o88o     o8888o o888o  o888o o888bood8P'   o888ooooood8 o8o        `8  o888ooooood8 o888o  o888o      " << endl;
	setColor(white, black);

}

int menuDraw() //�޴��� ��Ÿ���� �Լ�
{
	int x = 63;
	int y = 26;
	setColor(white, black);
	setCursor(x - 2, y); //>����� ���� -2
	cout << "> GAME START!" << endl;
	setCursor(x, y + 1); //��ĭ �Ʒ����� +1
	cout << "	  EXIT..." << endl;
	
	while (1)
	{
		char n = keyControl();
		switch (n) {
		case UP:
			if (y > 26) {
				setCursor(x - 2, y);
				cout << " "; //Ŀ���� ����
				setCursor(x - 2, --y);
				cout << ">"; //Ŀ���� ����
			} 
			break;

		case DOWN:
			if (y < 27) {
				setCursor(x - 2, y);
				cout << " ";
				setCursor(x - 2, ++y);
				cout << ">";
			}
			break;
		case SPACE:
			if (y - 26 == 0) { //���� ����
				return 0; //0�� ����
				break;
			}
			else {
				return 1;// 1�� ����
				break;
			}
		}
	}
}