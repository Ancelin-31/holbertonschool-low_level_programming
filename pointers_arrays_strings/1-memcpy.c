#include "main.h"

/**
 * *_memcpy - copies memory area
 * @src: source area
 * @dest: destination area
 * @n: memory limit in bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
