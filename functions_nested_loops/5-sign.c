#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: int
 * _putchar - puts character
 * Return: 1 if greater than zero, 0 if null and '-1'if less than zero
 */

int print_sign(int n)
{
	if (n > '0')
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar (48);
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
