#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: adress of the beginning of the list
 * @str: data in the nodes
 *
 * Return: adress of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

	while (str[i])
		i++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node->str);
		free(new_node);
		return (NULL);
	}

	new_node->len = i;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
