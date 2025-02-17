#include <stdio.h>

/**
 * main - displays the alphabet in lowercase, then in uppercase
 *
 * Return: 0 if correct
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);

		alphabet++;
	}

	char ALPHABET = 'A';

	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);

		ALPHABET++;
	}
putchar('\n');
return (0);
}
