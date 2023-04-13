#include "game.h"
#include "util.h"

char tempMap[20][20]; //임시저장 배열

char map[27][50] = {  // 콘솔창에 뜨게할 맵  50 X 27 
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
char startGrass[20][20] = { //잔디 20 X 20
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

char map1[20][20] = { //잔디 20 X 20
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

char map2[20][20] = { //잔디 20 X 20
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

char map3[20][20] = { //잔디 20 X 20
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
	for (height = 0; height < 27; height++) { //맵 세로 길이까지
		for (weight = 0; weight < 50; weight++) { 

			char temp = map[height][weight];

			if (temp == '0') {
				setColor(black, black);
				cout << "  ";  //빈공간
			}
			else if (temp == '1') {
				setColor(green, green);
				cout << "■";  //벽
			}
			else if (temp == 's') {
				*x = weight;
				*y = height;

				setColor(white, black);
				cout << "★";  //플레이어
			}
		}
		cout << endl;
	}

	int gy = 5; //grass배열 출력 y값
	setCursor(27, gy);
	setColor(green, black); //잔디 색

	for (height = 0; height < 20; height++) { //잔디 20 X 20 출력 2중 for문 
		for (weight = 0; weight < 20; weight++) {
			cout << "■";
		}
		setCursor(27, gy++);  //한줄에 20개 출력하고 커서를 다음줄로 내림
	}

	setColor(white, black); //기본 색상으로 리셋
	Sleep(3000);
}

void drawUI(int* x, int* y) {
	setColor(white, black);
	setCursor(5, 30);
	cout << "남은 시간";

}

void move(int* x, int* y, int _x, int _y) {  //x,y는 실제 좌표가 저장돼있는 변수 메모리 주소, _x,_y는 얼마나 이동할지 값
	char mapObject = tempMap[*y + _y][*x + _x]; //이동시키기 전에 이동할 위치의 맵 데이터가 저장됨
	setColor(white, black); //색 기본값

	//if (mapObject == '0' || mapObject=='g') { //빈 공간일 때만 움직이도록 설정
		setCursor(*x, *y);
		cout << "  "; //지우기

		setColor(white, black); //플레이어 색
		setCursor(*x + _x, *y + _y); //증감한 위치로 이동 후 출력
		cout << "★";

		*x += _x; //실제 좌표값 반영
		*y += _y;
}

void gameLoop(int mapCode) {
	int x, y; //플레이어 좌표 변수 선언
	int playing = 1;  //1 게임, 0 종료

	if (mapCode == 0) { //쉬운맵
		memcpy(tempMap, map1, sizeof(tempMap));   //저장할 공간, 복사할 원본, 크기
	}
	else if (mapCode == 1) { //보통맵
		memcpy(tempMap, map2, sizeof(tempMap));
	}
	else if (mapCode == 2) { //어려운맵
		memcpy(tempMap, map3, sizeof(tempMap));
	}

	drawMap(&x, &y); //맵에 좌표 포인터 전달

	while (playing) {
		switch (keyControl()) {
		case UP:
			move(&x, &y, 0, -1); //y값 0에서 위로 가니까 -1
			break;

		case DOWN:
			move(&x, &y, 0, 1); //y값 0에서 아래로 가니까 +1
			break;

		case RIGHT:
			move(&x, &y, 1, 0); //x값 0에서 오른쪽으로 가니까 +1
			break;

		case LEFT:
			move(&x, &y, -1, 0); //x값 0에서 왼쪽으로 가니까 -1
			break;

		case SPACE:
			playing = 0; //루프 반복 종료
		}
	}
}

int levelListDraw() 
{
	system("mode con: cols=70 lines=30"); //난이도 선택시 여백이 많아 보기 불편해서 설정
	int x = 32;
	int y = 13;

	system("cls");
	setCursor(x -3, y -10); //64, 6
	setColor(yellow, black);
	cout << "★ LEVEL ★" << endl;

	setColor(white, black);
	setCursor(x -4, y ); //67, 16
	cout << ">   EASY Ⅰ" << endl;

	setCursor(x , y +1); //66, 17
	cout << "NORMAL Ⅱ" << endl;

	setColor(red, black);
	setCursor(x,  y+2); //67, 18
	cout << "HARD Ⅲ" << endl;

	setColor(white, black);
	setCursor(x , y +3); //66, 19
	cout << "BACK..." << endl;
	//y의 범위 16~19 16 17 18 19
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

int keyControl() //방향키 컨트롤 함수
{
	char input;  //엔터를 누르지 않아도 바로 입력되는 함수
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

void titleDraw() //타이틀 화면을 나타내주는 함수
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

int menuDraw() //메뉴를 나타내는 함수
{
	int x = 63;
	int y = 26;
	setColor(white, black);
	setCursor(x - 2, y); //>출력을 위해 -2
	cout << "> GAME START!" << endl;
	setCursor(x, y + 1); //한칸 아래여서 +1
	cout << "	  EXIT..." << endl;
	
	while (1)
	{
		char n = keyControl();
		switch (n) {
		case UP:
			if (y > 26) {
				setCursor(x - 2, y);
				cout << " "; //커서를 지움
				setCursor(x - 2, --y);
				cout << ">"; //커서를 생성
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
			if (y - 26 == 0) { //게임 시작
				return 0; //0은 시작
				break;
			}
			else {
				return 1;// 1은 종료
				break;
			}
		}
	}
}