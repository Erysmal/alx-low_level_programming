#include <stdio.h>
#include "main.h"

/**
 * times_table - Function that print 9 time tab from 0
 *
 * Return: Alwats 0.
 */

void times_table(void)
{
	int row, column;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			int results = row * column;

			if (column == 0)
			{
				printf("%d", results);
			}
			else
			{
			printf("%2d", results);
			}

			if (column != 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
