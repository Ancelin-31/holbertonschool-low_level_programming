#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function as a parameter
 * @array: array
 * @size: size of the array
 * @action: pointer to function o use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
