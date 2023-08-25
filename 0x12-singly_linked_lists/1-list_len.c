#include "lists.h"

/**
 * list_len - function
 * @h: node
 * Return: list_t
 */

size_t list_len(const list_t *h)
{

	size_t num_len = 0;

	while (h)
	{
		num_len++;
		h = h->next;
	}

	return (num_len);
}
