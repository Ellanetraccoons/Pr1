

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

int main()
{
	int i = 5;
	int sum = 0;
	while (i < 15)
	{
		sum = sum + i;
		printf("%i+", i);
		i = i + 1;
	}
	sum = sum + i;
	printf("%i=%i", i, sum);
	system("pause");
}


