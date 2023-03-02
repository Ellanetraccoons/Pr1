

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

int main()
	{
		int i = 0;
		while (i < 15)
		{
			if (i % 2 != 0)
			{
				printf("%i\n", i);
			}
			i = i + 1;
		}
		system("pause");
}

