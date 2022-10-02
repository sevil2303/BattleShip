#pragma once


#include <Windows.h>
#include<conio.h>
#include <time.h>
#include <iomanip>
#include "Directions.h"
#include "Functions.h"
#include "Start.h"



const int s = 12;
const int t = 12;
int a = 5;
int user1 = 0;
int user2 = 0;
int newuser1 = 0;
int newuser2 = 0;
char player[s][t]{};
char user[s][t]{};
enum Directions { UP = 72, DOWN = 80, RIGHT = 77, LEFT = 75 };




void Start(char game[12][12]) {
	srand(time(0));
	cout << endl;
	mysetcolor(2, 0);
	cout << "    ";
	cout << "Y O U" << endl;
	mysetcolor(7, 0);
	int j = 65;
	int l = 0;
	cout << "    ";
	for (size_t i = 1; i <= 10; i++)
	{
		cout << l++ << "   ";
	}cout << endl;
	for (size_t i = 1; i <= 10; i++)
	{
		cout << char(j++) << ") ";
		for (size_t k = 1; k <= 10; k++)
		{
			if (game[i][k] == 2) {
				mysetcolor(2, 0);
				cout << "|" << char(178) << "|" << " ";
				mysetcolor(7, 0);
			}
			else if (game[i][k] == 3) {
				mysetcolor(4, 0);
				cout << "|" << char(178) << "|" << " ";
				mysetcolor(7, 0);
			}
			else if (game[i][k] == 4) {
				mysetcolor(6, 0);
				cout << "|" << char(178) << "|" << " ";
				mysetcolor(7, 0);
			}
			else {
				game[i][k] = char(178);
				cout << "|" << game[i][k] << "|" << " ";
			}

		}
		cout << endl << endl;
	}
	cout << endl << endl;
}


void Ship1(int s, int t, char game[12][12]) {
	game[s + 1][t + 1] = 2;
}



bool isEmpty(int no, int a, int s, int t, char game[12][12]) {
	if (game[s + 1][t + 1] == 2) {
		return false;
	}
	if (numbers[a] == 1) {
		for (size_t i = s; i <= s + 2; i += 2)
		{
			for (size_t k = t; k <= t + 2; k += 2)
			{
				if (game[i][k] == 2) {
					return false;
					break;
				}
			}
		}
		if (game[s][t + 1] == 2) {
			return false;
		}
		else if (game[s + 2][t + 1] == 2) {
			return false;
		}
		else if (game[s + 1][t] == 2) {
			return false;
		}
		else if (game[s + 1][t + 2] == 2) {
			return false;
		}

	}
	if (no == UP) {
		for (size_t i = s + 2; i >= s - numbers[a] + 1; i--)
		{
			for (size_t k = t; k <= t + 2; k += 2)
			{
				if (game[i][k] == 2) {
					return false;
					break;
				}

			}
		}

		if (game[s + 2][t + 1] == 2) {
			return false;
		}
		else if (game[s - numbers[a] + 1][t + 1] == 2) {
			return false;
		}
	}
	else if (no == DOWN) {
		for (size_t i = s; i <= s + numbers[a] + 1; i++)
		{
			for (size_t k = t; k <= t + 2; k += 2)
			{
				if (game[i][k] == 2) {
					return false;
					break;
				}
			}
		}

		if (game[s][t + 1] == 2) {
			return false;
		}
		else if (game[s + numbers[a] + 1][t + 1] == 2) {
			return false;
		}

	}
	else if (no == LEFT) {
		for (size_t i = s; i <= s + 2; i += 2)
		{

			for (size_t k = t + 2; k >= t - numbers[a] + 1; k--)
			{
				if (game[i][k] == 2) {
					return false;
					break;
				}
			}

		}


		if (game[s + 1][t + 2] == 2) {
			return false;
		}
		else if (game[s + 1][t - numbers[a] + 1] == 2) {
			return false;
		}

	}
	else if (no == RIGHT) {
		for (size_t i = s; i <= s + 2; i += 2)
		{
			for (size_t k = t; k <= t + numbers[a] + 1; k++)
			{
				if (game[i][k] == 2) {
					return false;
					break;
				}

			}
		}

		if (game[s + 1][t] == 2) {
			return false;
		}
		else if (game[s + 1][t + numbers[a] + 1] == 2) {
			return false;
		}

	}

	return true;

}

void Player2Area(char game[12][12]) {
	cout << "    ";
	mysetcolor(2, 0);
	cout << "R I V A L" << endl;
	mysetcolor(7, 0);
	int j = 65;
	int l = 0;
	cout << "    ";
	for (size_t i = 1; i <= 10; i++)
	{
		cout << l++ << "   ";
	}cout << endl;
	for (size_t i = 1; i <= 10; i++)
	{
		cout << char(j++) << ") ";
		for (size_t k = 1; k <= 10; k++)
		{
			if (player[i][k] == 2) {
				mysetcolor(2, 0);
				cout << "|" << char(178) << "|" << " ";
				mysetcolor(7, 0);
			}
			else if (player[i][k] == 3) {
				mysetcolor(4, 0);
				cout << "|" << char(178) << "|" << " ";
				mysetcolor(7, 0);
			}
			else if (player[i][k] == 4) {
				mysetcolor(6, 0);
				cout << "|" << char(178) << "|" << " ";
				mysetcolor(7, 0);
			}
			else {
				player[i][k] = char(178);
				cout << "|" << player[i][k] << "|" << " ";
			}

		}
		cout << endl << endl;
	}
}
void Player2() {
	cout << "\n" << endl;
	srand(time(0));
	int a = 0;
	while (a <= 9)
	{
		int random1 = rand() % 10;
		int random2 = rand() % 10;
		int directions = 1 + rand() % 4;
		int dir = 0;
		if (numbers[a] == 1) {
			if (isEmpty(0, a, random1, random2, player)) {
				mysetcolor(2, 0);
				Ship1(random1, random2, player);
				++a;
				mysetcolor(7, 0);
				system("cls");
				continue;

			}
			else {
				continue;
			}
		}
		if (directions == 1) {
			dir = UP;
			if (random1 + 1 - numbers[a] < 0) {
				continue;
			}
			else if (isEmpty(dir, a, random1, random2, player)) {
				mysetcolor(2, 0);
				Up(a, random1, random2, player);
				++a;
				mysetcolor(7, 0);
				system("cls");
				continue;
			}
			else {
				continue;
			}
		}
		else if (directions == 2) {
			dir = DOWN;
			if (random1 + numbers[a] > 10) {
				continue;
			}
			else if (isEmpty(dir, a, random1, random2, player)) {

				mysetcolor(2, 0);
				Down(a, random1, random2, player);
				++a;
				mysetcolor(7, 0);
				system("cls");
				continue;
			}
			else {
				continue;
			}


		}
		else if (directions == 3) {
			dir = LEFT;
			if (random2 + 1 - numbers[a] < 0) {
				continue;
			}
			else if (isEmpty(dir, a, random1, random2, player)) {
				mysetcolor(2, 0);
				Left(a, random1, random2, player);
				++a;
				mysetcolor(7, 0);
				system("cls");
				continue;

			}
			else {
				continue;
			}


		}
		else if (directions == 4) {
			dir = RIGHT;
			if (random2 + numbers[a] > 10) {
				continue;
			}
			else if (isEmpty(dir, a, random1, random2, player)) {
				mysetcolor(2, 0);
				Right(a, random1, random2, player);
				++a;
				mysetcolor(7, 0);
				system("cls");
				continue;

			}
			else {
				continue;
			}

			cout << endl;


		}
	}
}
void Random() {
	int a = 0;
	srand(time(0));
	while (a <= 9)
	{
		int random1 = rand() % 10;
		int random2 = rand() % 10;
		int directions = 1 + rand() % 4;
		int dir = 0;
		if (numbers[a] == 1) {
			if (isEmpty(0, a, random1, random2, user)) {
				mysetcolor(2, 0);
				Ship1(random1, random2, user);
				++a;
				mysetcolor(7, 0);
				system("cls");
				Start(user);
				continue;

			}
			else {
				continue;
			}
		}
		if (directions == 1) {
			dir = UP;
			if (random1 + 1 - numbers[a] < 0) {
				continue;
			}
			else if (isEmpty(dir, a, random1, random2, user)) {
				mysetcolor(2, 0);
				Up(a, random1, random2, user);
				++a;
				mysetcolor(7, 0);
				system("cls");
				Start(user);
				continue;
			}
			else {
				continue;
			}
		}
		else if (directions == 2) {
			dir = DOWN;
			if (random1 + numbers[a] > 10) {
				continue;
			}
			else if (isEmpty(dir, a, random1, random2, user)) {

				mysetcolor(2, 0);
				Down(a, random1, random2, user);
				++a;
				mysetcolor(7, 0);
				system("cls");
				Start(user);
				continue;
			}
			else {
				continue;
			}


		}
		else if (directions == 3) {
			dir = LEFT;
			if (random2 + 1 - numbers[a] < 0) {
				continue;
			}
			else if (isEmpty(dir, a, random1, random2, user)) {
				mysetcolor(2, 0);
				Left(a, random1, random2, user);
				++a;
				mysetcolor(7, 0);
				system("cls");
				Start(user);
				continue;

			}
			else {
				continue;
			}


		}
		else if (directions == 4) {
			dir = RIGHT;
			if (random2 + numbers[a] > 10) {
				continue;
			}
			else if (isEmpty(dir, a, random1, random2, user)) {
				mysetcolor(2, 0);
				Right(a, random1, random2, user);
				++a;
				mysetcolor(7, 0);
				system("cls");
				Start(user);
				continue;

			}
			else {
				continue;
			}


		}
	}
}
void Manual() {
	int a = 0;
	Start(user);
	while (a <= 9)
	{
		cout << "For " << numbers[a] << " ships " << endl;
		cout << "Coordinate(letter) : " << endl;
		char coordinate1 = ' ';
		cin >> coordinate1;

		cout << "Coordinate(digit) : " << endl;
		int coordinate2 = 0;
		cin >> coordinate2;
		int temp = int(coordinate1) - 65;
		if (numbers[a] == 1) {
			if (isEmpty(0, a, temp, coordinate2, user)) {
				mysetcolor(2, 0);
				Ship1(temp, coordinate2, user);
				++a;
				mysetcolor(7, 0);
				system("cls");
				Start(user);
				continue;

			}
			else {
				cout << "No" << endl;
				continue;
			}


		}


		cout << "Left,Right,Up,Down" << endl;

		char symbol = _getch();

		if (symbol == -32) {
			symbol = _getch();
			int no = symbol;

			if (no == UP) {
				if (temp + 1 - numbers[a] < 0) {
					cout << "Change direction" << endl;
					continue;
				}
				if (isEmpty(no, a, temp, coordinate2, user)) {
					mysetcolor(2, 0);
					Up(a, temp, coordinate2, user);
					++a;
					mysetcolor(7, 0);
					system("cls");
					Start(user);
					continue;
				}

				else {
					cout << "COINCIDES" << endl;
					continue;
				}
			}
			else if (no == DOWN) {
				if (temp + numbers[a] > 10) {
					cout << "Change direction" << endl;
					continue;
				}
				if (isEmpty(no, a, temp, coordinate2, user)) {

					mysetcolor(2, 0);
					Down(a, temp, coordinate2, user);
					++a;
					mysetcolor(7, 0);
					system("cls");
					Start(user);
					continue;
				}
				else {
					cout << "No" << endl;
					continue;
				}
			}
			else if (no == LEFT) {
				if (coordinate2 + 1 - numbers[a] < 0) {
					cout << "Change direction" << endl;
					continue;
				}
				if (isEmpty(no, a, temp, coordinate2, user)) {
					mysetcolor(2, 0);
					Left(a, temp, coordinate2, user);
					++a;
					mysetcolor(7, 0);
					system("cls");
					Start(user);
					continue;

				}
				cout << "No" << endl;
			}
			else if (no == RIGHT) {
				if (coordinate2 + numbers[a] > 10) {
					cout << "Change direction" << endl;
					continue;
				}
				if (isEmpty(no, a, temp, coordinate2, user)) {
					mysetcolor(2, 0);
					Right(a, temp, coordinate2, user);
					++a;
					mysetcolor(7, 0);
					system("cls");
					Start(user);
					continue;

				}
				cout << "No" << endl;
			}

		}

	}
}
void Attack();
void Choices(int s, int t) {
	while (true)
	{


		ShowMenu();
		int select = 0;
		cout << "\t\t\t\t\t  Enter your choice : ";
		cin >> select;
		cout << endl;
		if (select == 1) {
			system("cls");
			cout << "Random  [1]" << endl;
			cout << "Manual  [2]" << endl;

			int select = 0;
			int a = 0;
			cout << "Enter your choice : " << endl;
			cin >> select;
			if (select == 1) {
				srand(time(0));
				//random
				Random();

			}
			if (select == 2) {
				//manual
				Manual();


			}
			Player2();

			Attack();

		}
		else if (select == 2) {
			system("cls");
			mysetcolor(7, 0);
			cout << "The object of Battleship is to try and sink \nall of the other player's before they sink all of your ships." << endl << endl;
			cout << "Neither you nor the other player can see the other's board \nso you must try to guess where they are." << endl << endl;
			cout << "All of one player's ships have been sunk, the game ends." << endl << endl;
			cout << "1. Player 1 is you and Player 2 is computer." << endl << endl;
			cout << "2. The 5 ships are : Carrier(occupies 5 spaces), Battleship(4), Cruiser(3), Submarine(3), and Destroyer(2)." << endl << endl;
			cout << "3. Each player places the 5 ships somewhere on their board. " << endl << endl;
			cout << "4. The ships can only be placed vertically or horizontally." << endl;
			cout << "   Diagonal placement is not allowed." << endl << endl;
			cout << "5. No part of a ship may hang off the edge of the board. " << endl << endl;
			cout << "6. No ships may be placed on another ship." << endl << endl;
			cout << "7. Ships may not overlap each other." << endl << endl;
			cout << "8. Once the guessing begins, the players may not move the ships." << endl << endl;
			system("pause");
		}
		else if (select == 3) {
			cout << "\t\t\t\t\t  BYE-BYE!" << endl;
			return;
		}
		else {
			cout << "\t\t\t\t\t  INVALID ENTRY!!!" << endl;
		}
	}

}


bool isEmptyForAttack(int s, int t, char game[12][12]) {
	if (s - 1 < -1 || t + 1 > 10 || s + 1 > 10 || t - 1 < -1) {
		return false;
	}
	if (game[s + 1][t + 1] == 3) {
		return false;
	}
	if (game[s + 1][t + 1] == 4) {
		return false;
	}
	return true;
}

bool turnback = false;
bool myturn = false;
bool injured1 = false;
bool injured2 = false;
bool injured3 = false;
bool injured4 = false;
int length_h = 0;
void Attack() {
	int usership = 20;
	int playership = 20;
	while (usership != 0 || playership != 0) {
		cout << "Number of ships remaining (R I V A L) :  " << playership << endl;
		cout << "Number of ships remaining (Y O U) :  " << usership << endl;
		if (usership == 0) {
			cout << "Game Over!" << endl;
			break;
		}
		else if (playership == 0) {
			cout << "You are winner!" << endl;
			break;
		}


		cout << "Coordinate(letter) : " << endl;
		char coordinate1 = ' ';
		cin >> coordinate1;

		cout << "Coordinate(digit) : " << endl;
		int coordinate2 = 0;
		cin >> coordinate2;

		int temp = int(coordinate1) - 65;
		if (isEmptyForAttack(temp, coordinate2, player) && (temp <= 9 && temp >= 0) && (coordinate2 <= 9 && coordinate2 >= 0)) {
			if (player[temp + 1][coordinate2 + 1] != 2 && player[temp + 1][coordinate2 + 1] != 3 && player[temp + 1][coordinate2 + 1] != 4) {

				player[temp + 1][coordinate2 + 1] = 4;
				cout << "You missed" << endl;
				Sleep(1000);
				system("cls");
				Player2Area(player);
			}

			else if (player[temp + 1][coordinate2 + 1] == 2) {
				playership--;
				cout << "Rival is injured" << endl;
				Sleep(1000);
				player[temp + 1][coordinate2 + 1] = 3;
				system("cls");
				Player2Area(player);
				continue;
			}
			else {
				cout << "Change coordinates" << endl;
				continue;
			}

		}
		else {
			cout << "Change coordinates" << endl;
			continue;
		}

		while (true) {
			if (turnback == false) {

				user1 = 0 + rand() % 10;

				user2 = 0 + rand() % 10;
			}
			else {
				if (injured1) {
					newuser1 = user1;
					while (true)
					{

						newuser1 -= 1;
						if (newuser1 == -1) {
							injured1 = false;
							injured2 = true;
							turnback = true;
							break;
						}
						else if (isEmptyForAttack(newuser1, user2, user) && newuser1 >= 0) {
							if (user[newuser1 + 1][user2 + 1] != 2 && user[newuser1 + 1][user2 + 1] != 3 && user[newuser1 + 1][user2 + 1] != 4) {


								//turnback = true;
								user[newuser1 + 1][user2 + 1] = 4;
								cout << "Rival missed" << endl;
								Sleep(1000);
								system("cls");
								Start(user);
								/*injured2 = true;
								turnback = true;*/
								break;
								//Sleep(2000);
							}

							else if (user[newuser1 + 1][user2 + 1] == 2) {
								length_h++;
								usership--;
								cout << "You are injured" << endl;
								Sleep(1000);
								user[newuser1 + 1][user2 + 1] = 3;
								system("cls");
								Start(user);

								/*if (HasBurstHorizontal(newuser1, user2, user, length_h)) {
									turnback = false;
									break;
								}*/

								//injured2 = true;
								//newuser1 = user1;
							}

						}
						else {
							injured1 = false;
							injured2 = true;
							turnback = true;
							break;
						}
					}
					if (newuser1 == -1) {
						injured1 = false;
						injured2 = true;
						turnback = true;

					}
					else if (user[newuser1 + 1][user2 + 1] != 2) {
						injured1 = false;
						injured2 = true;
						turnback = true;
						break;
					}
				}
				if (injured2) {
					newuser1 = user1;
					while (true)
					{
						newuser1 += 1;
						if (newuser1 >= 10) {
							injured2 = false;
							injured3 = true;
							turnback = true;
							break;
						}

						else if (isEmptyForAttack(newuser1, user2, user) && newuser2 <= 8) {
							if (user[newuser1 + 1][user2 + 1] != 2 && user[newuser1 + 1][user2 + 1] != 3 && user[newuser1 + 1][user2 + 1] != 4) {

								user[newuser1 + 1][user2 + 1] = 4;
								cout << "Rival missed" << endl;
								Sleep(1000);
								system("cls");
								Start(user);

								break;
							}

							else if (user[newuser1 + 1][user2 + 1] == 2) {
								length_h++;
								usership--;
								cout << "You are injured" << endl;
								Sleep(1000);
								user[newuser1 + 1][user2 + 1] = 3;
								system("cls");
								Start(user);

							}

						}
						else {
							injured2 = false;
							injured3 = true;
							turnback = true;
							break;
						}
					}
					if (newuser1 >= 10) {
						injured2 = false;
						injured3 = true;
						turnback = true;

					}
					else if (user[newuser1 + 1][user2 + 1] != 2) {

						injured2 = false;
						injured3 = true;
						turnback = true;
						break;
					}

				}
				if (injured3) {

					newuser2 = user2;
					while (true)
					{
						newuser2 -= 1;
						if (newuser2 == -1) {
							injured3 = false;
							injured4 = true;
							turnback = true;
							break;
						}
						else if (isEmptyForAttack(user1, newuser2, user) && newuser2 >= 0) {
							if (user[user1 + 1][newuser2 + 1] != 2 && user[user1 + 1][newuser2 + 1] != 3 && user[user1 + 1][newuser2 + 1] != 4) {

								user[user1 + 1][newuser2 + 1] = 4;
								cout << "Rival missed" << endl;
								Sleep(1000);
								system("cls");
								Start(user);

								break;

							}

							else if (user[user1 + 1][newuser2 + 1] == 2) {
								length_h++;
								usership--;
								cout << "You are injured" << endl;
								Sleep(1000);
								user[user1 + 1][newuser2 + 1] = 3;
								system("cls");
								Start(user);

							}

						}
						else {
							injured3 = false;
							injured4 = true;
							turnback = true;
							break;
						}
					}
					if (newuser2 == -1) {
						injured3 = false;
						injured4 = true;
						turnback = true;

					}
					else if (user[user1 + 1][newuser2 + 1] != 2) {
						injured3 = false;
						injured4 = true;
						turnback = true;
						break;
					}
				}
				if (injured4) {
					newuser2 = user2;
					while (true)
					{
						newuser2 += 1;
						if (newuser2 >= 10) {
							injured4 = false;
							turnback = false;
							break;
						}
						else if (isEmptyForAttack(user1, newuser2, user) && newuser2 <= 8) {
							if (user[user1 + 1][newuser2 + 1] != 2 && user[user1 + 1][newuser2 + 1] != 3 && user[user1 + 1][newuser2 + 1] != 4) {

								user[user1 + 1][newuser2 + 1] = 4;
								cout << "Rival missed" << endl;
								Sleep(1000);
								system("cls");
								Start(user);

								break;
							}

							else if (user[user1 + 1][newuser2 + 1] == 2) {
								length_h++;
								usership--;
								cout << "You are injured" << endl;
								Sleep(1000);
								user[user1 + 1][newuser2 + 1] = 3;
								system("cls");
								Start(user);

							}

						}
						else {
							injured4 = false;
							turnback = false;
							break;
						}
					}
					if (newuser2 >= 10) {
						injured4 = false;
						turnback = false;

					}
					else if (user[user1 + 1][newuser2 + 1] != 2) {
						injured4 = false;
						turnback = false;
						break;
					}
				}
			}
			if (isEmptyForAttack(user1, user2, user)) {
				if (user[user1 + 1][user2 + 1] != 2 && user[user1 + 1][user2 + 1] != 3 && user[user1 + 1][user2 + 1] != 4) {

					user[user1 + 1][user2 + 1] = 4;
					cout << "Rival missed" << endl;
					Sleep(1000);
					system("cls");
					Start(user);
					break;
				}

				else if (user[user1 + 1][user2 + 1] == 2) {

					usership--;
					cout << "You are injured" << endl;
					Sleep(1000);
					user[user1 + 1][user2 + 1] = 3;
					system("cls");
					Start(user);
					injured1 = true;
					turnback = true;
				}

			}
			else {
				turnback = false;
				continue;

			}

		}
	}
}






