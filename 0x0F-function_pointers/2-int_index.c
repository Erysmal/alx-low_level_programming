#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that search for integer
 * @array: array
 * @size: size of array
 * @cmp: pointer function
 * Return: index of the fisrt element if cmp did not return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
		}	}
	}

	return (-1);
}
