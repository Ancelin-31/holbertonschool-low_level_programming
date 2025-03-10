#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the given string
 *
 * @size: size of the space
 * @str: string copied
 *
 * Return: pointer to new space, or NULL is str = NULL
 */

char *_strdup(char *str)
{
	unsigned int size;
	unsigned int i;
	char *duplicate;

	for (size = 0; str[size]; size++)
	{
	}

	if (str == NULL)
	{
		return (NULL);
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
