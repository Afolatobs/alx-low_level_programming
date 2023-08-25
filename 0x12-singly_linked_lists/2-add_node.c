#include "lists.h"

/**
 * add_node -  new node
 * @head: node
 * @str: string
 *
 * Return: add_node
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node;

	while (str[len])
	len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
