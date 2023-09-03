#include "main.h"

/**
  *times_table - function that prints the 9 times table from 0
  *Return:
  */

void times_table(void)
{
	int i, g, result;

	for (i = 0 ; i < 10 ; i++)
	{
		for (g = 0 ; g < 10 ; g++)
		{
			result = i * g;
			if (g == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (g != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
