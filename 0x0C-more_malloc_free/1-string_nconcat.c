#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function thay concat two string
 *@s2: one string
 *@s1: two string
 *@n: number of times to be concatenated
 * Return: @ptstr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j, k = 0;
	int length;
	char *ptstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	length = len1 + n + 1;

	ptstr = (char *)malloc(length * sizeof(char));

	if (ptstr != NULL)
	{
		for (i = 0; i < len1; i++)
			ptstr[k++] = s1[i];
		for (j = 0; j < n; j++)
			ptstr[k++] = s2[j];

		ptstr[k] = '\0';
	}
	return (ptstr);
}

