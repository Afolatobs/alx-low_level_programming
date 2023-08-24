#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
 * struct node - singly linked list
 * @str: string - (malloc'ed string)
 * @value: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct node
{
	char *str;
	unsigned int value;
	struct node *next;
}node;

typedef struct
{
	node *head;
	node *tail;
	int size;
}list_t;


size_t print_list(const list_t *h);

#endif
