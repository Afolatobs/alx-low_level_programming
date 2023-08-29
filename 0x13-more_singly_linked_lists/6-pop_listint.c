#include "lists.h"

/**
 * pop_listint - the main funtion
 * @head: the element
 *
 * Return: the element
 */

int pop_listint(listint_t **head)
{
	listint_t *cate;
	int n;

	if (!head || !*head)
	return (0);

	n = (*head)->n;
	cate = (*head)->next;
	free(*head);
	*head = cate;

	return (n);

}
