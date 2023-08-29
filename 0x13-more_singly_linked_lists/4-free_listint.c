#include "lists.h"

/**
 * free_listint - the main function
 * @head: the element
 */

void free_listint(listint_t *head)
{
	listint_t *cate;

	while (head)
	{
	cate = head->next;
	free(head);
	head = cate;
	}
}
