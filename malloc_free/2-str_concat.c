#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates 2 strings of characters
 * @s1: first given string
 * @s2: second given string
 *
 * Return: 0 if true, NULL if error
 */

char *str_concat(char *s1, char *s2)
{
	int size1;
	int size2;
	int i;
	char *stotal;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1] != '\0'; size1++)
	{
	}

	for (size2 = 0; s2[size2] != '\0'; size2++)
	{
	}

	stotal = malloc(sizeof(char) * (size1 + size2) + 1);

	if (stotal == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		stotal[i] = s1[i];

	for (i = 0; i <= size2; i++)
	{
		if (i != size2)
			stotal[size1 + i] = s2[i];
		else
			stotal[size1 + i] = '\0';
	}
	return (stotal);
}
