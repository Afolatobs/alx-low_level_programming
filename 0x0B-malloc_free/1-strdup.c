#include "main.h"

/**
 * _strdup - copies string to newly allocated space in memory
 * @str: string to copy to new memory
 * Return: pointer to new memory
 */

char *_strdup(char *str)
{
	int a;
	char *copy;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		copy[a] = str[a];

	return (copy);
}
