#include <stdio.h>
/**
 * main - Entry point
 *@argc: number of argument
 *@argv: Actual arguments
 *Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
