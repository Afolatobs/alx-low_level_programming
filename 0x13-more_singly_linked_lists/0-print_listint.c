#include "lists.h"

/**
 * print_listint - the main function
 * @h: head node
 *
 * Return: the number of element
 */

size_t print_listint(const listint_t *h)
{
	size_t data = 0;

	while (h)
	{
		printf("%d\n", h->n);
		data++;
		h = h->next;
	}

	return (data);
}
