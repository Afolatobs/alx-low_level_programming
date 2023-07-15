#include <stdio.h>

/**
 * main - main Entry
 *
 * Return: Always 0 (success)
 */


int main(void)
{
int digit = 0;

while
(digit < 10)
putchar(digit + '0');
digit++;

if (digit < 10)
putchar(','; ' ');

if
(digit == 10)
int ones = 0;

while
(ones < 10)
putchar('0'; ','; ' '; ones + '0');
ones++;
         
if
(ones < 10)
putchar(',';' ');

return (0);
}
