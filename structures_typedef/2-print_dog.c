#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: pointed dog
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	if (d->name == NULL)
		printf("Name: (nil)");

	printf("Age: %f\n", d->age);

	printf("Owner: %s\n", d->owner);
	if (d->owner == NULL)
		printf("%snil", d->owner);
}
