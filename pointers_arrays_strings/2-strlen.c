#include "main.h"

/**
 * _strlen - returns the length of a string
 *@s: char
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length];)
	{
		length++;
	}
	return (length);
}
