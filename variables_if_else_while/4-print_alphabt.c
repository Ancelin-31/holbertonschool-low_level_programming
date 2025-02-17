#include <stdio.h>

/**
 * main - displays alphabet in lowercase except c and q
 *
 * Return: 0 if correct
 */
int main(void)
{
	int alphabt = 'a';

	for (; alphabt <= 'z'; alphabt++)
	{
		if (alphabt == 'e' || alphabt == 'q')
		{
		}
		else
		{
		putchar(alphabt);
		}
	}
putchar('\n');
return (0);
}
