#pragma once
#include "main.h"

//#ifndef KEY_CODE
//#define KEY_CODE

#define UP 72 //위 방향키
#define DOWN 80 //아래 방향키
#define LEFT 75 //왼쪽 방향키
#define RIGHT 77 //오른쪽 방향키
#define SPACE 4 //스페이스바


void gameLoop(int);
int keyControl();
void titleDraw();
int menuDraw();
int levelListDraw();
void drawMap(int*, int*);
void move(int*, int*, int, int); 
void drawUI(int*, int*);