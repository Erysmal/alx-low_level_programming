#include "main.h"

/**
 * _strcat - Function that concatenate two string
 * @dest: String to be concatenated
 * @src: String to be concatenated
 * Return: A pointer to the returning string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
