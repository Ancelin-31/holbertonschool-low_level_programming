#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog and stores a copy of name and owner
 * @name: char, name
 * @age: float, age
 * @owner: char, owner
 *
 * Return: pointer to new dog, NULL if failing
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int i, length;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	for (length = 0; name[length] != '\0'; length++)
		new->name = malloc(sizeof(char) * (length + 1));

	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; i < length; i++)
		new->name[i] = name[i];
	new->name[i] = '\0';

	new->age = age;

	for (length = 0; owner[length] != '\0'; length++)
		new->owner = malloc(sizeof(char) * (length + 1));

	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	for (i = 0; i < length; i++)
		new->owner[i] = owner[i];
	new->owner[i] = '\0';

	return (new);
}
