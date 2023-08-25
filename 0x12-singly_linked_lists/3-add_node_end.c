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
	list_t *dull = *head;

	while (str[len])
	len++;

	back_node = malloc(sizeof(list_t));
	if (!back_node)
	return (NULL);

	back_node->str = strdup(str);
	back_node->next = NULL;
	back_node->len = len;

	if (*head == NULL)
	{
	(*head) = back_node;
	return (back_node);
	}

	while (dull->next)
	dull = dull->next;
	dull->next = back_node;

	return (back_node);
}
