#include "main.h"

/**
 * _strcat - Function that concatenate two string
 * @dest: String to be concatenated
 * @src: String to be concatenated
 * Return: A pointer to the returning string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;


	while (*ptr != '\0')
	{
		ptr++;
	}


	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}
