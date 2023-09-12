#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - function that create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: (new_dog)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name != NULL && owner != NULL)
	{
		new_dog = (dog_t *)malloc(sizeof(dog_t));
		if (new_dog == NULL)
		{
			return (NULL);
		}

		new_dog->name = strdup(name);
		new_dog->owner = strdup(owner);

		new_dog->age = age;
	}
	return (new_dog);
}
