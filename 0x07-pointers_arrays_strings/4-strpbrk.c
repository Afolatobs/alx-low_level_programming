#include "main.h"

/**
 * _strpbrk - searches a strng for any of a set of bytes
 * @s: the string to be searched
 * @accept: the set of bytes to be searched for
 * Return: if a set is matched - a pointer to the matched byte
 * if not set is matched - NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
	for (i = 0 ; accept[i] ; i++)
	{
		if (*s == accept[i])
			return (s);
	}
	s++;
	}
	return ('\0');
}
