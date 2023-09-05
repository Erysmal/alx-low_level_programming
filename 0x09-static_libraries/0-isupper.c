#include "main.h"

/**
 * _isupper - Function that checks for uppercase letter
 *
 * @c:Character to be used
 *
 * Return: 1 if c is uppercase else p
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
