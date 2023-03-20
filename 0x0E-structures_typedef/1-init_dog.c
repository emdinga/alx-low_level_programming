#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - main fuction
 * @d: 1st parameter
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: init_dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
}
