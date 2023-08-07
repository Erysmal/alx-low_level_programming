#include <stdio.h>
/**
 * main - Entry point
 *@argc: number of argument
 *@argv: actual arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
