#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins make change for
 * an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful, 1 if an error occur
 */

int main(int argc, char *argv[])
{
	int num, result, p;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (p = 0; p < 5 && num >= 0; p++)
	{
		while (num >= coins[p])
		{
			result++;
			num = num - coins[p];
		}
	}
	printf("%d\n", result);
	return (0);
}
