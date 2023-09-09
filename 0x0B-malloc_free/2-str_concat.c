#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Function that concatenate two string
 * @s1: string 1 to be concatenated
 * @s2: string 2 to be concatenated with string 1
 * Return: the allocated space of the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t length1, length2;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	else if (s2 == NULL)
	{
		s2 = " ";
	}

	length1 = strlen(s1);
	length2 = strlen(s2);

	ptr = (char *)malloc((length1 + length2 + 1) * sizeof(char));
	strcat(ptr, s1);
	strcat(ptr, s2);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
