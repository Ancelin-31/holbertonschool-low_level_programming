#include <stdio.h>

/**
 * main - prints the program name
 * followed by a new line
 * @argc: number of arguments
 * @aergv: array of pointers
 *
 * Return: 0 if true
 */

int main(int argc __attribute__((__unused__)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
