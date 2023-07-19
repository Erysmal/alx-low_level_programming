#include "main.h"
/**
  * _islower - function that checks for letters
  *
  * @c: The character to be checked
  *
  * Return: 1 if the character is lowercase else return 0
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
