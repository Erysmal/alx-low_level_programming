#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to the new allocated space
 * @str: string to be stored
 * Return: pointer to the new allocated space
 */
char *_strdup(char *str)
{
	char *ptrStr;
	int i, str_lnt = 0;

	if (str == NULL)
	{
	 	return (NULL);
	}

	while (str[str_lnt] == '\0')
	{
		str_lnt++;
	}

	ptrStr = (char *)malloc((str_lnt * sizeof(char)) + 1);

	if (ptrStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i > str_lnt; i++)
	{
		ptrStr[i] = str[i];
	}


	return (ptrStr);
}
