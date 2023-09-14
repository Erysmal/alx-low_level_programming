#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of argument
 * @argv: Argument
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int num, i;
	unsigned char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_ptr = (unsigned char *)main;
	for (i = 0; i < num; i++)
	{
		printf("%02x ", main_ptr[i]);
	}
	printf("\n");

	return (0);
}
