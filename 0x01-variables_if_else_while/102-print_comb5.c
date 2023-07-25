#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit1, digit2, digit3, digit4;


	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = 0; digit2 <= 9; digit2++)
		{
			for (digit3 = digit1; digit3 <= 9; digit3++)
			{
				for (digit4 = (digit3 == digit1) ? (digit2 + 1) : 0; digit4 <= 9; digit4++)
				{
					putchar(digit1 + '0');
					putchar(digit2 + '0');
					putchar(' ');

					putchar(digit3 + '0');
					putchar(digit4 + '0');
					if (digit1 != 9 || digit2 != 9 || digit3 != 9 || digit4 != 9)
					{
					putchar(',');

					putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
