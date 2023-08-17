#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function on each array element
 * @array: pointer to an array of integers
 * @size: size of the array
 * @action: pointer to the function to be executed on each iteration
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
