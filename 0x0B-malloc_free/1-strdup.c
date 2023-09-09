#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to the new allocated space
 * @str: string to be stored
 * Return: pointer to the new allocated space
 */
char *_strdup(char *str)
{
	char *ptr;
	size_t length;

	if (str == NULL)
	{
		return (NULL);
	}
	length = strlen(str);

	ptr = (char *)malloc((length * sizeof(char)) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	strcpy(ptr, str);

	return (ptr);
}
