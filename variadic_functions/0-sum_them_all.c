#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all numbers given to the function
 * @const unsigned int n: number os arguments passed to the function
 *
 * Return: result (or 0 if n = 0)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int result = 0;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
		result += va_arg(numbers, int);

	va_end(numbers);

	return(result);
}
