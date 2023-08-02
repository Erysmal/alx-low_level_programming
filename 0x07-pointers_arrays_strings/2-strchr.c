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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
