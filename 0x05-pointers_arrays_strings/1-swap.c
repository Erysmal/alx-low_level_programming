#include "main.h"
/**
 * swap_int - function that swap value for two integer
 * @a: character to be swapped
 * @b: character to be swapped
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
