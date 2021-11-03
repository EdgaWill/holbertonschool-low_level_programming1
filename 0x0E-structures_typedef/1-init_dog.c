#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - input
 * @d: struct name
 * @name: First name
 * @age: Second name
 * @owner: Third name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
