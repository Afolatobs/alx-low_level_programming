#include "lists.h"

/**
 * add_nodeint_end - the main function
 * @head: the old element
 * @n: the data in the element
 *
 * Return: the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nat_ol = malloc(sizeof(listint_t));

	if (!nat_ol)
	{
		return (NULL);
	}

	nat_ol->n = n;
	nat_ol->next = NULL;

	if (*head == NULL)
	{
		*head = nat_ol;
	}
	else
	{
		listint_t *cate = *head;

		while (cate->next != NULL)
		{
			cate = cate->next;
		}
		cate->next = nat_ol;
	}
	return (nat_ol);
}
