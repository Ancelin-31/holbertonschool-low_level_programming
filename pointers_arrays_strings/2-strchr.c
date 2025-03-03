#include "main.h"
#include "_strlen.c"
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
	int length = _strlen(s);
	char *ptr;

	if (c != '\0')
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == c)
			{
				ptr = &s[i];
				return (ptr);
			}
		}
	}
	else
		ptr = &s[length];
	return (ptr);
}
