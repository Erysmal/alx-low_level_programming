#include "main.h"

/**
 * _isalpha - Check for alphabets
 *
 * @c: The Character to be checked
 *
 *  Return: 1 if either lower or uppercase alphabet
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
