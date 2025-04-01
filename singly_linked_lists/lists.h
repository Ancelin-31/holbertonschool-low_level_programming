#ifndef LISTS_H_
#define LISTS_H_

#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;

int _putchar(char c);
size_t print_list(const list_t *h);


#endif
