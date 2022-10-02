#pragma once
#include <iostream>
#include <Windows.h>
#include<conio.h>
#include <time.h>
#include <iomanip>
#include "Directions.h"
#include "Functions.h"
#include "Start.h"
using namespace std;

void mysetcolor(int fg, int bg) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, fg | (bg << 4));
}

void First() {
	mysetcolor(7, 0);
	cout << "||||||||||||       |||||     ||||||||||| ||||||||||| |||         |||||||||||  |||||||||||  |||     |||  |||  |||||||||||" << endl;
	cout << "|||      |||      ||| |||        |||         |||     |||         |||          |||          |||     |||  |||  |||     |||" << endl;
	cout << "|||      |||     |||   |||       |||         |||     |||         |||          |||          |||     |||  |||  |||     |||" << endl;
	cout << "||||||||||      |||||||||||      |||         |||     |||         |||||||||||  |||||||||||  |||||||||||  |||  |||||||||||" << endl;
	cout << "|||      |||   |||       |||     |||         |||     |||         |||                  |||  |||     |||  |||  |||" << endl;
	cout << "|||      |||  |||         |||    |||         |||     |||         |||                  |||  |||     |||  |||  |||" << endl;
	cout << "|||||||||||| |||           |||   |||         |||     ||||||||||| |||||||||||  |||||||||||  |||     |||  |||  |||" << endl;

}

void ShowMenu() {
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t       _________________________" << endl;
	cout << "\t\t\t\t      |                         |" << endl;
	cout << "\t\t\t\t      | New Game            [1] |" << endl;
	cout << "\t\t\t\t      | Game Instructions   [2] |" << endl;
	cout << "\t\t\t\t      | Exit                [3] |" << endl;
	cout << "\t\t\t\t      |_________________________|" << endl;
	cout << endl << endl;
}