#include "main.h"

/**
 * print_alphabet - displays the alphabet in lowercase
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);

		alphabet++;
	}

_putchar('\n');
}
