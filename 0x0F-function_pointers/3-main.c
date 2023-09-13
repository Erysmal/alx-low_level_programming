#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the command line arguments
 * Return: 0 (success) or other values on failure
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int), num1, num2, result;
	char *operator;

	if (argc != 4)
	{
		printf("Error: Invalid number of arguments\n");
		return (99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	func = get_op_func(operator);

	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
