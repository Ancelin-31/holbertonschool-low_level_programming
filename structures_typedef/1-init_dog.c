#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: variable dog
 * @name: pointed name
 * @age: age
 * @owner: owner
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
