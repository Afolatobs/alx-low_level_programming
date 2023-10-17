#include "main.h"

/**
 * _memcpy - a function thatcopies memory area
 * @dest: location where is stored
 * @src: memory is copied
 * @n: number of copied
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int f = 0;
	int j = n;

	for (; f < j ; f++)
	{
		dest[f] = src[f];
		n--;
	}
	return (dest);
}
