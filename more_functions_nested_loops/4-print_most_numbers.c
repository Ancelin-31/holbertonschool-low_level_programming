#include "main.h"

/**
 * print_most_numbers - displays numbers except two and four
 * _putchar - puts character
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int number;

	for (number = 48; number <= 57;)
	{
		if (number == 50 || number == 52)
		{
			number++;
		}
		else
		{
			_putchar(number);
			number++;
		}
	}

_putchar('\n');
}
