

#include "stdafx.h"
#include <stdio.h>
#include <iostream>


int main()
{
    int a,b;
	printf("a=");
	scanf_s("%i",&a);
	printf("b=");
	scanf_s("%i",&b);
	if(a>b)
	{
		printf("A bolshe");
	}
	else
	{
		if (a == b)
		{
			printf("A=B");
		}
		else
		{
			printf("B bolshe");
		}

	}
	system("pause");
}

 