#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers followed by a new line
 * @argc: number of arguments to add
 * @argv: array of numbers
 *
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
}
