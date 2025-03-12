#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - creates an of integers, with values ordered from min to max
 * @min: minimum value of array integers
 * @max: maximum value of array integers
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (max < min)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		array[i] = min + i;

	return (array);
}
