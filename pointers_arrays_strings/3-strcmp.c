#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int size_s1;
	int size_s2;
	int comp;
	int result;
	int limit;

	for (size_s1 = 0; s1[size_s1]; size_s1++)
	{
	}
	for (size_s2 = 0; s2[size_s2]; size_s2++)
	{
	}
	if (size_s1 <= size_s2)
	{
		limit = size_s1;
	}
	else
	{
		limit = size_s2;
	}

	while (comp <= limit)
	{
		if (s1[comp] == s2[comp])
		{
			comp++;
		}
		else
		{
			result = s1[comp] - s2[comp];
		}
		comp++;
	}
	return (result);
}
