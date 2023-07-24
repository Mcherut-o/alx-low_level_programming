#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory occupied by dog object
 * @d: Pointer to dog object to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
