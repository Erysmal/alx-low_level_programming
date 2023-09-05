#include "main.h"

/**
 * _memcpy - Function that copy memory area
 * @dest: Memory where is stored
 * @src: Memory where is copied
 * @n: number of bytes
 * Return: (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
