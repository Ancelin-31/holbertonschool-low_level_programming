#include <stdio.h>

/**
 * main - prints from 1 to 100 with fizz and buzz
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		if (i % 3 != 0 && i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}
