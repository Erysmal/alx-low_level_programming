#include "main.h"

/**
 * print_numbers - Function that print numbers 0-9 followed by a new line
 *
 * Return:
 */
void print_numbers(void)
{
	char digits[] = "0123456789";
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(digits[i]);
	}
	_putchar('\n');
}
