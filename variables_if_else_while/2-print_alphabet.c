#include <stdio.h>

/**
 * main - displays the alphabet in lowercase
 *
 * return : 0 if correct
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);

		alphabet++;
	}

putchar('\n');
return (0);
}
