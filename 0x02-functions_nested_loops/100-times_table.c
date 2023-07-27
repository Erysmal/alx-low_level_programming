#include "main.h"
#include <stdio.h>
/**
 * print_times_table - pint n times tabke starting with zero
 *@n: to be printed
 *return: 0
 */
void print_times_table(int n)
{
	int i, r;

	if (n > 15 || n > 0)
	{
		printf(",");
	}
	for (i = 0; i < n; i++)
	{
		r = n + i;
		printf("%d",r);
	}
}
