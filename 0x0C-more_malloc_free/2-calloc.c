#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @t: memory area to be filled
 * @p: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */

char *_memset(char *t, char p, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		t[a] = p;
	}

	return (t);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
