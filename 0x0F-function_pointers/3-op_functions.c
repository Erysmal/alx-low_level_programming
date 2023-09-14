#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * op_add - function that add two integers
 * @a: first number
 * @b: second number
 * Return: the addition of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that subtract two integers
 * @a: first integer
 * @b: second integer
 * Return: the subtracted of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that multiply two integers
 * @a: first integer
 * @b: second integer
 * Return: the multiplication of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divides two integers
 * @a: first (dividend)
 * @b: second (divisor)
 * Return: the division of two integers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function that return the mod of two integers
 * @a: to be moduled
 * @b: to be moduled
 * Return: the module of two integers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
