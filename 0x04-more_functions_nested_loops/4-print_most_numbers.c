#include "main.h"

/**
 * print_most_numbers - Function that print numbers 0-9 followed by a new line
 *
 * Return:
 */
void print_most_numbers(void)
{
	char digits[] = "0123456789";
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(digits[i]);
		
	}
	_putchar('\n');
}
