#include "main.h"
/**
  * print_alphabet_x10 - print 10x alphabets
  *
  */
void print_alphabet_x10(void)
{
	int x10;
	char letters;

	for (x10 = 0; x10 <= 10; x10++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
	}
	_putchar('\n');
}
