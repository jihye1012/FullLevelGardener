#pragma once


#ifndef __IOSTREAM__ //__IOSTREAM__매크로가 정의되어 있지 않다면
#define __IOSTREAM__ // 정의
#include <iostream> //헤더파일 선언
#endif //종료 (중복선언 방지)

#ifndef __WINDOWS_H__
#define __WINDOWS_H__
#include <windows.h> //커서 위치 이동을 위해 사용
#endif

#ifndef __CONIO_H__  
#define __CONIO_H__
#include <conio.h> //_getch 함수를 쓰기위해 사용
#endif 
using namespace std;