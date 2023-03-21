#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory
 * @d: memory of struct dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
