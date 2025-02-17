#include <stdio.h>

/**
 * main - displays all single digit numbers
 *
 * Return: 0 if correct
 */

int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
