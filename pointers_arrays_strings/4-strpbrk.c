#include "main.h"
#include "_strlen.c"

/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: string searched
 * @accept: substring searched
 *
 * Return: matching bytes (or NULL without match)
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int search;

	while (*s != '\0')
	{
		for (search = 0; accept[search] != '\0'; search++)
		{
			if (*s == accept[search])
				return (s);
		}
		s++;
	}
	return (0);
}
