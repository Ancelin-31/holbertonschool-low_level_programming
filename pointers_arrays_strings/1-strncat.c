#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * but limiting used bytes and does not need to be
 * null-terminated.
 * @dest: destination
 * @src: source
 * @n: max bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != 0; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
