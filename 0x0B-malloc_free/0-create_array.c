#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that create array of chars
 * @size: size of array
 * @c: what will be filled in the array
 * Return: pointer to char @str
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}

	str = (char *)malloc(size * sizeof(char));

	if (str == 0)
	{
		return (NULL);
	}

	count = 0;
	for (; count < size; count++)
	{
		str[count] = c;
	}

	return (str);
}
