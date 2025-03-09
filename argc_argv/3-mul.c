#include <stdio.h>
#include <stdlib.h>

/**
 * main - multpilies two given numbers
 * @argc: number of given arguments, int
 * @argv: array of given argumens
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
