#include "lists.h"

/**
 * free_listint2 - the main function
 * @head: the element
 */

void free_listint2(listint_t **head)
{
	listint_t *cate;

	while (*head != NULL)
	{
		cate = *head;
		*head = (*head)->next;
		free(cate);
	}
}
