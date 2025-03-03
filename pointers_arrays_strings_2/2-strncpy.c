#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: max bytes
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{
	}

	for (j = 0; j < n && src[j]; j++)
	{
		dest[j] = src[j];
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
