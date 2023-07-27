#include "main.h"

/**
 * reverse_array - Function that reverse content of an array
 * @a: array of intergers
 * @n: number of element of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
