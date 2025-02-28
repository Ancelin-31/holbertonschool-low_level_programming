#include "main.h"

/**
 * *_strcpy - copies a string pointed to by src
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int total = 0;
	int copy;

	while (*src != '\0')
	{
		total++;
		src++;
	}

	src = src - total;

	for (copy = 0; copy <= total; copy++)
	{
		dest[copy] = src[copy];
	}

	return (dest);
}
