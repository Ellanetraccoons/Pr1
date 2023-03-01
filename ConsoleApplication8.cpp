

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
		printf("Leap year");

	}
	else
	{
		printf("No leap year");
	}

	cout << " " << endl;



	if ((m == 12 && d > 22) || (m == 1 && d < 21))

	{
		printf("Capricorn");
	}
	else
		if ((m == 1 && d > 20) || (m == 2 && d < 20))

	{
		printf("Aquarius");
	}
		else
	if ((m == 2 && d > 19) || (m == 3 && d < 21))

	{
		printf("Pisces");
	}
	else
	if ((m == 3 && d > 20) || (m == 4 && d < 21))

	{
		printf("Aries");
	}
	else
	if ((m == 4 && d > 20) || (m == 5 && d < 22))

	{
		printf("Taurus");
	}
	else
	if ((m == 5 && d > 21) || (m == 6 && d < 22))

	{
		printf("Gemini");
	}
	else
	if ((m == 6 && d > 21) || (m == 7 && d < 23))

	{
		printf("Cancer");
	}
	else
	if ((m == 7 && d > 22) || (m == 8 && d < 24))

	{
		printf("Leo");
	}
	else
	if ((m == 8 && d > 23) || (m == 9 && d < 24))

	{
		printf("Virgo");
	}
	else
	if ((m == 9 && d > 23) || (m == 10 && d < 24))

	{
		printf("Libra");
	}
	else
	if ((m == 10 && d > 23) || (m == 11 && d < 23))

	{
		printf("Scorpio");
	}
	else
	if ((m == 11 && d > 22) || (m == 12 && d < 23))

	{
		printf("Sagittarius");
	}
	cout << " " << endl;
	vost = y % 12;
	switch (vost)
	{
	case 1:
	{
		printf("Year of the Rooster");
	}
	break;
	case 2:
	{
		printf("Year of the Dog");
	}
	break;
	case 3:
	{
		printf("Year of the Pig");
	}
	break;
	case 4:
	{
		printf("Year of the Rat");
	}
	break;
	case 5:
	{
		printf("Year of the Bull");
	}
	break;
	case 6:
	{
		printf("Year of the Tiger");
	}
	break;
	case 7:
	{
		printf("Year of the Rabbit");
	}
	break;
	case 8:
	{
		printf("Year of the Dragon");
	}
	break;
	case 9:
	{
		printf("Year of the Snake");
	}
	break;
	case 10:
	{
		printf("Year of the Horse");
	}
	break;
	case 11:
	{
		printf("Year of the Goat");
	}
	break;
	case 0:
	{
		printf("Year of the Monkey");
	}
	}
	cout << " " << endl;
	system("pause");
}

