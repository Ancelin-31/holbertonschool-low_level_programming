#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string
 * @s: string of characters
 */

void rev_string(char *s)
{
	int start = 0;
	int end = _strlen(s) - 1;
	char temp;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
