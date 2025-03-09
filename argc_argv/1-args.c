#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments, int
 * @argv: array containing arguments
 * Return: 0 if true
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
