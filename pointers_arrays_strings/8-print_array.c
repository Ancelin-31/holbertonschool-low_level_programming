#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: array
 * @n: integers
 */
void print_array(int *a, int n)
{
	int array;

	for (array = 0; array < n; array++)
	{
		printf("%d", a[array]);
		if (array != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
