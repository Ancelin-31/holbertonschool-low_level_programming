#include "main.h"

/**
 * print_list - prints all the elements of a list_t list
 * h: elements of the list (nodes)
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
		size_t length = 0;

	if (h == NULL)
		return(0);

	else 
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		length++;
		h = h->next;
	}
	return (length);
}
