#include <stdio.h>

/**
 * main - displays the alphabet in lowercase
 *
 * Return: 0 if correct
 */

int main(void)
{
	char tebahpla = 'z';

	while (tebahpla >= 'a')
	{
		putchar(tebahpla);

		tebahpla--;
	}

putchar('\n');
return (0);
}
