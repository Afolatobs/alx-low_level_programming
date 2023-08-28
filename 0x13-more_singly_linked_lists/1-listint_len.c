#include "lists.h"

/**
 * listint_len - the main function
 * @h: the head node
 *
 * Return: number of node
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
	h = h->next;
	n++;
	}

	return (n);
}
