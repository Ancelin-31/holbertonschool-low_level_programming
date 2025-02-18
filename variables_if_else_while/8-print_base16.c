#include <stdio.h>

/**
 * main - displays all single digit numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int hexa;

	for (hexa = 0; hexa <= 15; hexa++)
	{
		printf("%x", hexa);
	}
	printf("\n");
	return (0);
}
