#include "main.h"

/**
 * _strspn - get the length of  a prefix subtring
 * @s: string to search from
 * @accept: string to search
 * Return: void
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; s[i] != accept[j] ; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}