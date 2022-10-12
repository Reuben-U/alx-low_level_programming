#include "dog.h"
#include <stdlib.h>

/**
 * init_dog- initializes dog struct
* @d: pointer to dog to be initialized
 * @name: dog name
 * @age: dog's age
 * @owner: owner of the dog
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
