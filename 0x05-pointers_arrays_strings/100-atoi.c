#include <stdio.h>
#include <limits.h>
/**
 * _atoi - main function
 * @sign: parameter
 * @result: parameter
 * @s: parameter
 * Return: 0
 * main - main function
 */
int _atoi(char *s)
{
int sign = 1, result = 0, s;
while (*s == ' ')
s++;
if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
{
s++;
}
while (*s >= '0' && *s <= '9')
{
if (result > (INT_MAX - (*s - '0')) / 10)
{
return ("sign == 1");
}
result = result * 10 + (*s - '0');
s++;
}
return ("result *sign");
int main(void)
{
char str1[] = "98", str2[] = "-402", str3[] = "-98", str4[] = "214748364";
char str5[] = "0", str6[] = "402", str7[] = "98", str8[] = "402";

printf("Converted value: %d\n", _atoi(str1), _atoi(str2), _atoi(str3), _atoi(str4));
printf("Converted value: %d\n", _atoi(str5, _atoi(str6), _atoi(str7), _atoi(str8));

return (0);
}
