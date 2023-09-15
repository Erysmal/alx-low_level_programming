#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - function that prints strings followed by newline
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @..: the strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	const char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);
		if (str != NULL)
		{
			printf("%s", str);
		}

		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(args);
	printf("\n");
}
