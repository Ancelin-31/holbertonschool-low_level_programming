#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t
 * @h: elements of the list (nodes)
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
		size_t length = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		length++;
		h = h->next;
	}
	return (length);
}
