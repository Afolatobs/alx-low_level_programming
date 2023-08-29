#include "lists.h"

/**
 * free_listint2 - the main function
 * @head: the element
 */

void free_listint2(listint_t **head)
{
	listint_t *cate;

	if (head == NULL)
		return;

	while (*head)
	{
		cate = (*head)->next;
		free(*head);
		*head = cate;
	}

	*head = NULL;
}
