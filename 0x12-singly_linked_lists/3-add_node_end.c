#include "lists.h"

/**
 * add_node_end - new node
 * @head: node
 * @str: a string
 *
 * Return: the element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *back_node;

	while (str[len])
	len++;

	back_node = malloc(sizeof(list_t));
	if (!back_node)
	return (NULL);

	back_node->str = strdup(str);
	back_node->next = (*head);
	back_node->len = len;
	(*head) = back_node;

	return (*head);
}
