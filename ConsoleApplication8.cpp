

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
		printf("��� ����������");

	}
	else
	{
		printf("��� �� ����������");
	}

	cout << " " << endl;



	if ((m == 12 && d > 22) || (m == 1 && d < 21))

	{
		printf("�������");
	}
	else
		if ((m == 1 && d > 20) || (m == 2 && d < 20))

	{
		printf("�������");
	}
		else
	if ((m == 2 && d > 19) || (m == 3 && d < 21))

	{
		printf("����");
	}
	else
	if ((m == 3 && d > 20) || (m == 4 && d < 21))

	{
		printf("����");
	}
	else
	if ((m == 4 && d > 20) || (m == 5 && d < 22))

	{
		printf("�����");
	}
	else
	if ((m == 5 && d > 21) || (m == 6 && d < 22))

	{
		printf("��������");
	}
	else
	if ((m == 6 && d > 21) || (m == 7 && d < 23))

	{
		printf("���");
	}
	else
	if ((m == 7 && d > 22) || (m == 8 && d < 24))

	{
		printf("���");
	}
	else
	if ((m == 8 && d > 23) || (m == 9 && d < 24))

	{
		printf("����");
	}
	else
	if ((m == 9 && d > 23) || (m == 10 && d < 24))

	{
		printf("����");
	}
	else
	if ((m == 10 && d > 23) || (m == 11 && d < 23))

	{
		printf("��������");
	}
	else
	if ((m == 11 && d > 22) || (m == 12 && d < 23))

	{
		printf("�������");
	}
	cout << " " << endl;
	vost = y % 12;
	switch (vost)
	{
	case 1:
	{
		printf("��� ������");
	}
	break;
	case 2:
	{
		printf("��� ������");
	}
	break;
	case 3:
	{
		printf("��� ������");
	}
	break;
	case 4:
	{
		printf("��� �����");
	}
	break;
	case 5:
	{
		printf("��� ����");
	}
	break;
	case 6:
	{
		printf("��� �����");
	}
	break;
	case 7:
	{
		printf("��� �������");
	}
	break;
	case 8:
	{
		printf("��� �������");
	}
	break;
	case 9:
	{
		printf("��� ����");
	}
	break;
	case 10:
	{
		printf("��� ������");
	}
	break;
	case 11:
	{
		printf("��� ����");
	}
	break;
	case 0:
	{
		printf("��� ��������");
	}
	}
	cout << " " << endl;
	system("pause");
}

