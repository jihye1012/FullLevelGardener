#include "game.h"
#include "util.h"

int keyControl() //����Ű ��Ʈ�� �Լ�
{
	char input;  //���͸� ������ �ʾƵ� �ٷ� �ԷµǴ� �Լ�
	while (true) {
		input = _getch();
		if (input == 224) {
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

	cout << "	 oooooooooooo ooooo     ooo ooooo        ooooo             ooooo        oooooooooooo oooooo     oooo oooooooooooo ooooo			" << endl;
	cout << "	`888'     `8 `888'     `8' `888'        `888'             `888'        `888'     `8  `888.     .8'  `888'     `8 `888'			" << endl;
	cout << "	 888          888       8   888          888               888          888           `888.   .8'    888          888			" << endl;
	cout << "	 888oooo8     888       8   888          888               888          888oooo8       `888. .8'     888oooo8     888			" << endl;
	cout << "	 888          888       8   888          888               888          888             `888.8'      888          888			" << endl;
	cout << "	 888          `88.    .8'   888       o  888       o       888       o  888       o      `888'       888       o  888       o	" << endl;
	cout << "	o888o           `YbodP'    o888ooooood8 o888ooooood8      o888ooooood8 o888ooooood8       `8'       o888ooooood8 o888ooooood8	" << endl;
	cout << "		   .oooooo.          .o.       ooooooooo.   oooooooooo.   oooooooooooo ooooo      ooo oooooooooooo ooooooooo.   " << endl;
	cout << "		 d8P'  `Y8b        .888.      `888   `Y88. `888'   `Y8b  `888'     `8 `888b.     `8' `888'     `8 `888   `Y88. " << endl;
	cout << "		888               .8 888.      888   .d88'  888      888  888          8 `88b.    8   888          888   .d88'" << endl;
	cout << "		888              .8' `888.     888ooo88P'   888      888  888oooo8     8   `88b.  8   888oooo8     888ooo88P'  " << endl;
	cout << "		888     ooooo   .88ooo8888.    888`88b.     888      888  888          8     `88b.8   888          888`88b." << endl;
	cout << "		`88.    .88'   .8'     `888.   888  `88b.   888     d88'  888       o  8       `888   888       o  888  `88b.  " << endl;
	cout << "		 `Y8bood8P'   o88o     o8888o o888o  o888o o888bood8P'   o888ooooood8 o8o        `8  o888ooooood8 o888o  o888o      " << endl;


}

int menuDraw() //�޴��� ��Ÿ���� �Լ�
{
	int x = 63;
	int y = 26;
	setCursor(x - 2, y); //>����� ���� -2
	cout << "> GAME START!" << endl;
	setCursor(x, y + 1); //��ĭ �Ʒ����� +1
	cout << "	  EXIT..." << endl;

	while (true)
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
			return y - 26; // 0,1�� ���� �� �ִ�. �̶� 0�� ���ӽ��� 1�� ����
		}
	}
}