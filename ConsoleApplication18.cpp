
#include "stdafx.h"
#include <stdio.h>
#include <iostream>

int main()
{
	int n;
	int mas[100];
	printf("kol el");
	scanf_s("%i",&n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%i", &mas[i]);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%4i", mas[i]);
	}
	system("pause");
}

