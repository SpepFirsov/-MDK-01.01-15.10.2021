#include <iostream>
using namespace std;

#include <windows.h>
#include <Lmcons.h>
#include <stdio.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "rus");

	int rnd = 0;
	srand(time(NULL));
	rnd = 1 + rand() % 10;

	int rnd2 = 0;
	srand(time(NULL));
	rnd2 = 1 + rand() % 7;

	int rndA = 0;
	srand(time(NULL));
	rndA = 1 + rand() % 150;

	{
		if (rnd == 1)
		{
			cout << "Имя:Сергей" << endl;;
		}

		if (rnd == 2)
		{
			cout << "Имя:Иван" << endl;;
		}

		if (rnd == 3)
		{
			cout << "Имя:Катя" << endl;;
		}

		if (rnd == 4)
		{
			cout << "Имя:Ксения" << endl;;
		}

		if (rnd == 5)
		{
			cout << "Имя:Борис" << endl;;
		}

		if (rnd == 6)
		{
			cout << "Имя: Алексей" << endl;;
		}

		if (rnd == 7)
		{
			cout << "Имя: Василий" << endl;;
		}

		if (rnd == 8)
		{
			cout << "Имя: Макар" << endl;;
		}

		if (rnd == 9)
		{
			cout << "Имя: Ксения" << endl;;
		}

		if (rnd == 10)
		{
			cout << "Имя: Василий" << endl;;
		}
	}
	{
		if (rnd2 == 1)
		{
			cout << "адрес:ул.Горновенская ";
			cout << rndA << endl;;
		}

		if (rnd2 == 2)
		{
			cout << "адрес:ул.Восточно-казахская ";
			cout << rndA << endl;;
		}

		if (rnd2 == 3)
		{
			cout << "адрес:ул.Мира ";
			cout << rndA << endl;;
		}

		if (rnd2 == 4)
		{
			cout << "адрес:ул.Кировская ";
			cout << rndA << endl;;
		}

		if (rnd2 == 5)
		{
			cout << "адрес:ул.Спепляндская ";
			cout << rndA << endl;;
		}

		if (rnd2 == 6)
		{
			cout << "адрес:ул.Жилина ";
			cout << rndA << endl;;
		}

		if (rnd2 == 7)
		{
			cout << "адрес:ул.Тверская ";
			cout << rndA << endl;;
		}
	}
}


