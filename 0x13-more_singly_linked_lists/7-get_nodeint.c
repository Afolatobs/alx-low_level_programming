#include "lists.h"

/**
 * get_nodeint_at_index - the main function
 * @head: element
 * @index: index
 *
 * Return: the new element
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *cate = head;

	while (cate && n < index)
	{
	cate = cate->next;
	n++;
	}

	return (cate ? cate : NULL);
}
