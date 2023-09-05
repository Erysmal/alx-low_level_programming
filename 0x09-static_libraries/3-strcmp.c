#include "main.h"

/**
 * _strcmp - Function that compares 2 string
 * @s1: String to be compared
 * @s2: String to be compared
 * Return: (*s1 -s2)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
