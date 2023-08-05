#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: Always 0 if successful
 */

int main(int argc, char *argv[])
{
	(void) argv;/*Ignore argv*/
		printf("%d\n", argc - 1);

		return (0);
}
