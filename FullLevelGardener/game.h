#pragma once
#include "main.h"

//#ifndef KEY_CODE
//#define KEY_CODE

#define UP 72 //�� ����Ű
#define DOWN 80 //�Ʒ� ����Ű
#define LEFT 75 //���� ����Ű
#define RIGHT 77 //������ ����Ű
#define SPACE 4 //�����̽���


void gameLoop(int);
int keyControl();
void titleDraw();
int menuDraw();
int levelListDraw();
void drawMap(int*, int*);
void move(int*, int*, int, int); 
void drawUI(int*, int*);