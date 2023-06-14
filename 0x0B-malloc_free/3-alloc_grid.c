#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create dimensional array of integrers
 * @width: width of the array
 * @height: height of the array
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **mat;
	int x;
	int y;

	if (width <= 0 || height <= 0)
		return (NULL);
	mat = (int **)malloc(sizeof(int *) * height);
		if (mat == NULL)
			return (NULL);
	for (x = 0; x < height; ++x)
	{
		mat[x] = (int *)malloc(sizeof(int) * width);
		if (mat[x] == NULL)
		{
			for (y = 0; y < x; ++y)
				free(mat[y]);
			free(mat);
			return (NULL);
		}
		for (y = 0; y < width; ++y)
		{
			mat[x][y] = 0;
		}
	}
	return (mat);
}
