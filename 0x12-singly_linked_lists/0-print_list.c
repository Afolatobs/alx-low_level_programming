#include "lists.h"

/**
 * print_list - function
 * @h: node
 * Return: list_t
 */

size_t print_list(const list_t *h)
{
	while (h)
	{
	if (h->str == NULL)
	printf("[0] (nil)\n");

	else
	printf("the list_t is empty.\n");
	h++;
	}

	return (0);
}

