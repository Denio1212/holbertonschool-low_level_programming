#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees all dogos
 * @d: the pointer to the structure dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->owner);
	free(d->name);
	free(d);
	}
}


