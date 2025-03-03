#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: original string
 * @c: searched character
 *
 * Return: *c
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			return (ptr);
		}
	}
	if (s[i] == '\0')
		ptr = '\0';
	return (ptr);
}
