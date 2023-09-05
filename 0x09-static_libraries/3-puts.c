#include "main.h"
#include "stdio.h"

/**
 * _puts - Function that prints a string with new line
 * @str: String to be printed
 * Return:
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
