#include "main.h"

/**
 * print_alphabet_x10 - displays 10 times the alphabet in lowercase;
 */

void print_alphabet_x10(void)
{
	int i;
	int alphabet;

	for (i = 0; i < 10; i++)
	{
		alphabet = 97;

		while (alphabet <= 122)
		{
			_putchar(alphabet);

			alphabet++;
		}
	_putchar('\n');
	}
}
