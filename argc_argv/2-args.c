#include <stdio.h>

/**
 * main - prints all arguments it receives
 * separated by new lines
 * @argc: number of given arguments
 * @argv: array containing the arguments
 * Return: 0 if true
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
