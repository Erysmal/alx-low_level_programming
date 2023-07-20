#include "main.h"

/**
 * print_sign - A function that print signs
 *
 * @n: The character to be checked
 *
 * Return: 1, 0 and -1 if n is greater, equal to zero..
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}
	else
	{
		_putchar('-');

		return (-1);
	}

} 
