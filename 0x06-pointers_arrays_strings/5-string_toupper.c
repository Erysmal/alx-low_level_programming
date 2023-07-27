#include "main.h"

/**
 * string_toupper - Function that changes lowercase to uppercase characters.
 * @str: String to be change from lower to uppercase
 * Return: (str)
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}

	return (str);
}
