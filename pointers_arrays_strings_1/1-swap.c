#include "main.h"

/**
 * swap_int - swaps the values between a and b
 **@a: int
 **@b: int
 */
void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
