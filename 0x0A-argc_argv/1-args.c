#include <stdio.h>
/**
 * main - Entry point
 *@argc: number of argument
 *@argv: Actual arguments
 *Return: Always 0 (success)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d \n", argc - 1);

	return (0);
}
