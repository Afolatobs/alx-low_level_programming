#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments passed accross
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: Always 0 if successful
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
