#include "lists.h"

/**
 * add_nodeint - the main funtion
 * @n: the element data
 * @head: the first head
 *
 * Return: the new element address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *adnote = malloc(sizeof(listint_t));

	if (adnote != NULL)
	adnote->n = n;
	adnote->next = *head;
	*head = adnote;

	return (adnote);
}
