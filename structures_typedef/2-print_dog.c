#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: pointed dog
 */

void print_dog(struct dog *d)
{
	printf("Name: %s", d->name);
	if (d->name == NULL)
		printf("Name: (nil)");

	printf(" age: %f", d->age);

	printf(" owner: %s", d->owner);
	if (d->owner == NULL)
		printf("%snil", d->owner);
}
