#include "main.h"

/**
 * _strncat - Function that concatenate string
 * @dest: String to be concatenated
 * @src: String to be concatenated
 * @n: integer for memory expansion
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}



	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';

	return (dest);
}
