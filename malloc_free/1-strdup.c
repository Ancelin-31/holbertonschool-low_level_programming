#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the given string
 * @str: string copied
 *
 * Return: pointer to new space, or NULL is str = NULL
 */

char *_strdup(char *str)
{
	unsigned int size;
	unsigned int i;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	for (size = 0; str[size]; size++)
	{
	}

	duplicate = malloc(sizeof(char) * size + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[i + 1] = '\0';
	return (duplicate);
}
