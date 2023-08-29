#include "lists.h"

/**
 * sum_listint - the main element
 * @head: the element
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int n = 0;
	listint_t *cate = head;

	while (cate)
	{
	n += cate->n;
	cate = cate->next;
	}

	return (n);
}
