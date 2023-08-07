#include <stdio.h>
/**
 * main - Entry point
 *
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
