#include "main.h"

/**
 * _strncpy - Function that copies a string
 * @dest: String to do copying
 * @src: string to do coping
 * @n: number to increase memory
 * Return: (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}

	return (dest);
}
