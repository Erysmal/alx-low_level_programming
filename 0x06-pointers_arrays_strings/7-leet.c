#include "main.h"

/**
 * leet - Function that encode a string to 1337
 * @str: string to be encoded
 * Return: str
 */
char *leet(char *str)
{
	char *ptr = str;

	char *leet_chars = "aAeEoOtTlL";

	char *leet_replacements = "4433007711";

	int i;

	while (*ptr != '\0')
	{
		for (i = 0; leet_chars[i] != '\0'; i++)
		{
			if (*ptr == leet_chars[i])
			{
				*ptr = leet_replacements[i];

				break;
			}
		}

		ptr++;
	}
	return (str);
}
