#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: the head of the linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
