#include "main.h"

/**
 * alloc_grid - 2 dimensional array
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **result;
	int a;
	int b;

	if (width <= 0 || height <= 0)
		return (NULL);

	result = malloc(sizeof(int *) * height);

	if (result == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		result[a] = malloc(sizeof(int) * width);

		if (result[a] == NULL)
		{
			free(result);
			for (b = 0; b <= height; b++)
				free(result[b]);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			result[a][b] = 0;
	}
	return (result);
}
