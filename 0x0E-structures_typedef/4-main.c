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

    my_dog = new_dog("Ghost", 3.56, "jon snow");
    printf("My name is %s, and i am %.2f :) my owner is  %s, - woof!\n", my_dog->name, my_dog->age, my_dog->owner);
    printf("Original Name Address: %p\n", "Ghost");
    printf("Copied Name Address: %p\n", my_dog->name);
    printf("Original Owner Address: %p\n", "Jon Snow");
    printf("Copied Owner Address: %p\n", my_dog->owner);

    return (0);
}
