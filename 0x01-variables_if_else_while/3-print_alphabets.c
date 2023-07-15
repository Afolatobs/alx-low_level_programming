#include <stdio.h>

/**
 * main - code entry
 * Return: Forward 0 (success)
 *
 */

int main(void)
{
char p;
char t;

p = 'a';
t = 'A';

while
(p <= 'z')	{
putchar(p);
p++;
}

while
(t <= 'Z')	{
putchar(t);
t++;
}

putchar('\n');
return (0);
}
