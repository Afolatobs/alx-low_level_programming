#include "main.h"
#include <stdio.h>

/**
 * rot13 - encode starting using the rot13 encoding scheme
 * @s: string to be encoded
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i;
	int j;
char *a =
"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *b =
"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0 ; s[i] != '\0' ; i++)
{
for (j = 0 ; a[j] != 52 ; j++)
{
	if (s[i] == a[i])
	{
		s[i] = b[i];
break;
	}
}
}
return (s);
}
