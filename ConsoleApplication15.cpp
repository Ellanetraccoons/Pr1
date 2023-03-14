

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

int main()
{
	int a = 9;
	while (a != 7)
	{
		scanf_s("%i", &a);
		if (a == 7) {
printf("SUPER");
system("pause");
exit(1);
		}
		if (a > 7)
		{
			printf("bolshe 7\n");
		}
		else
		{
			if (a < 7)
			{
				printf("menshe 7\n");
			}


			if (a < 10)
			{
				printf("menshe 10\n");
			}
			else
			{
				if (a > 10)
				{
					printf("bolshe 10\n");
				}
			}
				if (a % 3 == 0)
				{
					printf("delitca na 3\n");
				}
			
				else {
					printf("ne delitca na 3\n");
				}
			
				if (a % 2 == 0) 
				{
					printf("delitca na 2\n");
				}
				else {
					printf("ne delitca na 2\n");
				}
			
		}
		
		system("pause");
	}
}


