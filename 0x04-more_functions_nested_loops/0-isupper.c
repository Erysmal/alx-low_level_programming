#include "main.h"

/**
 * _isupper - Checkes for uppercase character
 *
 * @c:character to be checked
 *
 * Return: 1 if c is uppercase otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
