#include <iostream>
#include <conio.h>
using namespace std;

int PlayerX = 1;
int PlayerY = 1;
char Key;
bool bisRunning = true;


int Map[10][10] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},

};


void Render()
{
	system("cls");

	for (int Y = 0; Y < 10; Y++)
	{
		for (int X = 0; X < 10; X++)
		{
			if (X == PlayerX && Y == PlayerY)
			{
				cout << "P";
			}
			else if (Map[Y][X] == 1)
			{
				cout << "#";
			}
			else if (Map[Y][X] == 0)
			{
				cout << " ";
			}

		}
		cout << endl;
	}
}

void Input()
{
	Key = _getch();
	
}

void Process()
{
	if (Key == 'w')
	{
		PlayerY--;
	}

	if (Key == 's')
	{
		PlayerY++;
	}

	if (Key == 'a')
	{
		PlayerX--;
	}

	if (Key == 'd')
	{
		PlayerX++;
	}

	if (Key == 'q')
	{
		bisRunning = false;
	}

}

// 절차지향프로그래밍
int main()
{

	// Engin, Game Loop
	while (bisRunning)
	{
		Input();

		Process();

		Render();
	}
	return 0;
}