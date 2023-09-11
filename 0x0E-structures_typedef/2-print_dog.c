#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Function that prints struct dog
 * @d: to be printed
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		if (d->age != -1.0)
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Name: (nil)\n");
		}
	}
}

