#include "main.h"
#include <stdio.h>
/**
 * print_array - Function that print n element of an array
 * @a: array name
 * @n: The number of element of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}

	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
