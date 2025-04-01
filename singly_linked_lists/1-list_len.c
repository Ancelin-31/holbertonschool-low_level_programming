#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int length = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
