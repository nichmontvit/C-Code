#include "iostream"
#include <windows.h>
#include <mmsystem.h>
#include <ctime>
#include <cstdlib>
#include <conio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const int rows = 10;
const int elements = 10;
int matrix[rows][elements];
int maxships = 10;

void Clear()
{
	for(int i = 0; i < rows ; i++)
	{
		for (int j = 0; j < elements; j++)
		{
			matrix[i][j] = 0;
		}
	}
}

void Show()
{
	for(int i = 0; i < rows ; i++)
	{
		for (int j = 0; j < elements; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void SetShips()
{
	int s = 0;
	while (s < maxships)
	{
		int x = rand() % 10;
		int y = rand() % 10;
		if (matrix [x][y] != 1)
		{
			s++;
			matrix [x][y] = 1;
		}
	}
}

bool Attack(int x, int y)
{
	if(matrix[x][y] == 1)
	{
		matrix[x][y] = 2;
		return true;
	}
	return false;
}

int NumberOfShips()
{
	int c = 0;

	for(int i=0; i < rows; i++)
	{
		for(int j = 0; j < elements; j++)
		{
			if(matrix[i][j] == 1)
			{
				c++;
			}
		}
	}
	return c;
}


int main(int argc, char** argv)
{
	//PlaySound(TEXT("Live-A-Live  - Megalomania .wav"),NULL,SND_ASYNC);
	srand(time(NULL));
	Clear();
	SetShips();;
	Show();
	cout << endl;
	int pos1, pos2;
	char prompt;
	while(1)
	{
		cout << "Please input location : ";
		cin >> pos1 >> pos2;

		if(Attack(pos1, pos2))
		{
			cout << "you got me!" << endl;
			cout << endl;
		}

		else
		{
			cout << "Sorry no ship at that position" << endl;
			cout << endl;
		}

		Show();
		cout << endl;
		cout << "number of ships left is : " << NumberOfShips() << endl;
		cout << "Do you want to surrender? (y/n) ";
		cin >> prompt;

		if(prompt == 'y')
		{
			break;
		}
	}

	cout << "game over !" << endl;
	cout << endl;
	return 0;
}
