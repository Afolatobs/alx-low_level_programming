#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int convert from the string
 */

int _atoi(char *s)
{
	int a, c, e, len, p, digit;

	a = 0;
	c = 0;
	e = 0;
	len = 0;
	p = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && p == 0)
	{
		if (s[a] == '-')
			++c;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (c % 2)
				digit = -digit;
			e = e * 10 + digit;
			p = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			p = 0;
		}
		a++;
	}
	if (p == 0)

		return (0);
	return (e);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful, 1 if an error occur
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
			return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
