#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 * Return: ld
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		n = -n;
	}
	ld = n % 10;
	if (ld < 0)
	{
		ld = -ld;
	}
	_putchar('0' + ld);
	return (ld);
}
