#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * struct dog - Dog created for files
 * @name: dog name
 * @age: dog's age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
