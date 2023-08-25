#include "lists.h"

/**
 * free_list - function
 *
 * @head: node
 *
 */

void free_list(list_t *head)
{
	list_t *dull;

	while (head)
	{
	dull = head->next;
	free(head->str);
	free(head);
	head = dull;
	}
}
