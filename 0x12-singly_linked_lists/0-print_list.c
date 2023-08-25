#include "lists.h"

/**
 * print_list - function
 * @h: node
 * Return: list_t
 */

size_t print_list(const list_t *h)
{
	size_t num_len = 0;

	while (h)
	{
	if (h == NULL)
	printf("[0] (nil)\n");

	num_len++;
	}

	return (num_len);
}

