#include "main.h"
#include "_strlen.c"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: origin string
 * @needle: pointed substring
 *
 * Return: substring location (pointer)
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int search, comp;

	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}

	for (search = 0, comp = 0; search != '\0' && comp != '\0'; search++)
	{
		if (haystack[search + comp] != needle[comp])
		{
			break;
		}
		if (needle[comp] == '\0')
		{
		return (haystack + search);
		}
	}
	return (NULL);

}
