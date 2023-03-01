

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int d, m, y, vost;
	printf("d=");
	scanf_s("%i", &d);
	printf("m=");
	scanf_s("%i", &m);
	printf("y=");
	scanf_s("%i", &y);

	if (y % 4 == 0)
	{
		printf("Год високосный");

	}
	else
	{
		printf("Год не високосный");
	}

	cout << " " << endl;



	if ((m == 12 && d > 22) || (m == 1 && d < 21))

	{
		printf("Козерог");
	}
	else
		if ((m == 1 && d > 20) || (m == 2 && d < 20))

	{
		printf("Водолей");
	}
		else
	if ((m == 2 && d > 19) || (m == 3 && d < 21))

	{
		printf("Рыбы");
	}
	else
	if ((m == 3 && d > 20) || (m == 4 && d < 21))

	{
		printf("Овен");
	}
	else
	if ((m == 4 && d > 20) || (m == 5 && d < 22))

	{
		printf("Телец");
	}
	else
	if ((m == 5 && d > 21) || (m == 6 && d < 22))

	{
		printf("Близнецы");
	}
	else
	if ((m == 6 && d > 21) || (m == 7 && d < 23))

	{
		printf("Рак");
	}
	else
	if ((m == 7 && d > 22) || (m == 8 && d < 24))

	{
		printf("Лев");
	}
	else
	if ((m == 8 && d > 23) || (m == 9 && d < 24))

	{
		printf("Дева");
	}
	else
	if ((m == 9 && d > 23) || (m == 10 && d < 24))

	{
		printf("Весы");
	}
	else
	if ((m == 10 && d > 23) || (m == 11 && d < 23))

	{
		printf("Скорпион");
	}
	else
	if ((m == 11 && d > 22) || (m == 12 && d < 23))

	{
		printf("Стрелец");
	}
	cout << " " << endl;
	vost = y % 12;
	switch (vost)
	{
	case 1:
	{
		printf("Год петуха");
	}
	break;
	case 2:
	{
		printf("Год собаки");
	}
	break;
	case 3:
	{
		printf("Год свиньи");
	}
	break;
	case 4:
	{
		printf("Год крысы");
	}
	break;
	case 5:
	{
		printf("Год быка");
	}
	break;
	case 6:
	{
		printf("Год тигра");
	}
	break;
	case 7:
	{
		printf("Год кролика");
	}
	break;
	case 8:
	{
		printf("Год дракона");
	}
	break;
	case 9:
	{
		printf("Год змеи");
	}
	break;
	case 10:
	{
		printf("Год лошади");
	}
	break;
	case 11:
	{
		printf("Год козы");
	}
	break;
	case 0:
	{
		printf("Год обезьяны");
	}
	}
	cout << " " << endl;
	system("pause");
}

