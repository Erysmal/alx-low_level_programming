#include "main.h"

/**
 * _isdigit - Function that check for digit through 0-9
 *
 * @c: Character to check for digit
 *
 * Return: 1 if c is a digit else return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
