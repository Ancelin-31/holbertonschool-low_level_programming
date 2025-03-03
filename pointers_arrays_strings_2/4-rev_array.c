#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int cursor, temp;

	for (cursor = 0; cursor < n / 2; cursor++)
	{
		temp = a[cursor];
		a[cursor] = a[n - cursor - 1];
		a[n - cursor - 1] = temp;
	}
}
