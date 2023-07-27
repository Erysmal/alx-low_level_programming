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

	if (n >= 15 || n <= 0)
	{
		for (i = 0; i < n; i++)
		{
			r = n + i;
			_putchar(r);
		}
	}
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_times_table(3);
	_putchar('\n');
	print_times_table(5);
	_putchar('\n');
	print_times_table(98);
	_putchar('\n');
	print_times_table(12);

	return (0);
}
