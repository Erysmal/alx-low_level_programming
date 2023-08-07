#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *@argc: number of argument
 *@argv: Actual argument in arrays
 *Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, numCoins, minCount, cent;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
	}

	numCoins = sizeof(coins) / sizeof(coins[0]);
	minCount = 0;
	for (i = 0; i < numCoins; i++)
	{
		minCount += cent / coins[i];
		cent %= coins[i];
	}
	printf("%d\n", minCount);
	return (0);
}
