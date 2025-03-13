#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: pointed dog
 */

void print_dog(struct dog *d)
{
	if (d->name != NULL)
		printf("Name: %s\n", d->name);

	if (d->name == NULL)
		printf("Name: (nil)\n");

	printf("Age: %f\n", d->age);

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
}
