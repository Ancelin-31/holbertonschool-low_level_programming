#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates 2 strings of characters
 * @s1: first given string
 * @s2: second given string
 *
 * Return: 0 if true, NULL if error
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size1;
	unsigned int size2;
	int i;
	char *stotal;


