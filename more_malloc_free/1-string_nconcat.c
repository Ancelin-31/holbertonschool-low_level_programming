#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: allocated memory
 *
 * Return: pointer to allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	if (n > j)
		n = j;

	string = malloc(sizeof(char) * (i + n + 1));

	if (string == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		string[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		string[i] = s2[j];
		i++;
	}
	string[i] = '\0';
	return (string);
}
