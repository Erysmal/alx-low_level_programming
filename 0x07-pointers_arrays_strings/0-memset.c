#include "main.h"
/**
 * _memset - fills memory with constant byte
 *@s:charater(pointer)
 *@b:character char
 *@n:character int
 *
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
