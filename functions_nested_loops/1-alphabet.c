#include "main.h"

/**
 * main - displays the alphabet in lowercase
 *
 * Return: 0 if correct
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);

		alphabet++;
	}

_putchar('\n');
return (0);
}
