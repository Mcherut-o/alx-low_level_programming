#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes the fields of a struct dog variable
 * @d: A pointer 
 * @name:Name of the dog.
 * @age: Age of dog
 * @owner: The one owning the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
