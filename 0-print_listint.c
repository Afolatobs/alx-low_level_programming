#include "lists.h"

/**
 *
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t n;

	while (h)
	{
	if (h->next == NULL)
	n++;
	printf("-> %lu elements\n", n);
	}
}
