#include "lists.h"

/**
 * print_listint - the main function
 * @h: head node
 *
 * Return: 0
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
