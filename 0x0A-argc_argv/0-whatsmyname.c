#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments present
 * @argv: array of arguments present
 * Return: Always 0 if successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
