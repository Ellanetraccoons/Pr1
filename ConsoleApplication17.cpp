

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

int main()
{
	int mas[7];

	for (int i = 0; i < 7; i++)
	{
		scanf("%i", &mas[i]);
	}
	for (int i = 0; i < 7; i++)
	{
		printf("%i  ", mas[i]);
	}

	system("pause");
}

