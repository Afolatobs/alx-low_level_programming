#include <stdio.h>

/**
 * main - main Entry
 *
 * Return: Always 0 (success)
 */


int main(void)
{
int h;

for (h = 0; h < 10; h++)

{
putchar(h + 10);
if (h < 9)

putchar(',');
putchar(',');
}

putchar('\n');
return (0);
}
