#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: adress of the beginning of the list
 * @str: data in the nodes
 *
 * Return: adress of the new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current;
	int i = 0;

	while (str[i])
		i++;
	
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	current = *head;

	if (new_node ==NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (new_node->str == NULL)
	{
		free(new_node->str);
		free(new_node);
		return (NULL);
	}
	while (current->next != NULL)
		current = current->next;

	current->next  = new_node;
	return (new_node);
}
