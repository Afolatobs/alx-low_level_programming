#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * add - finds the addition of two numbers
 * @a: parameter to carry out the operstion
 * @b: parameter to carry out the operation
 * Return: prints the said the detail
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - finds the subraction of two numbers
 * @a: parameter to carry out the operstion
 * @b: parameter to carry out the operation
 * Return: prints the said the detail
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - finds the multiplication of two numbers
 * @a: parameter to carry out the operstion
 * @b: parameter to carry out the operation
 * Return: prints the said the detail
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * dvi - finds the division of two numbers
 * @a: parameter to carry out the operstion
 * @b: parameter to carry out the operation
 * Return: prints the said the detail
 */

int dvi(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
		return (1);
}

/**
 * mod - finds the the mod of two numbers
 * @a: parameter to carry out the operstion
 * @b: parameter to carry out the operation
 * Return: prints the said the detail
 */

int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
		return (1);
}
