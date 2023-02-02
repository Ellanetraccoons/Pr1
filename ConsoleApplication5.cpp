
#include "stdafx.h"
#include<stdio.h>
#include <iostream>
int main()
{
	long log1, log2, log3;
	long pin1, pin2,pin3;
	printf("log1=");
	scanf_s("%i", &log1);

printf("log2=");
	scanf_s("%i", &log2);

	printf("log3=");
	scanf_s("%i", &log3);
	
	printf("pin1=");
	scanf_s("%i", &pin1);

printf("pin2=");
	scanf_s("%i", &pin2);

	printf("pin3=");
	scanf_s("%i", &pin3);
		
	if (((log1 == 123) && (pin1 == 321))||((log2 == 456) && (pin2 == 654)) || ((log3 == 4556) && (pin3 == 4654)))
	{
		printf("OK");
	}
	else
	{
		printf("Error");
	}
	system("pause");
}

