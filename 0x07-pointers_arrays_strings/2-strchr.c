#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locate a character in syring
 *@s: character
 *@c: character
 * Return: first occurence of c or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
