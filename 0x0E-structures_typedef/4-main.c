#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and i am %.2f :) my owner is  %s, - woof!\n", my_dog->name, my_dog->age, my_dog->owner);
    return (0);
}
