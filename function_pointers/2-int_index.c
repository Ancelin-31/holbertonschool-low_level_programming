#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer in an array of numbers
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function comparing values
 *
 * Return: index of the first element for which cmp does not return zero
 * -1 if function fails or if size is negative or null
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);


	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
