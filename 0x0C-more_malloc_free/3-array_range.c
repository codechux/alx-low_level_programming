#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ptr;
	int a;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (!ptr)
		return (NULL);
	for (a = 0; a <= (max - min); a++)
		ptr[a] = min + a;
	return (ptr);
}
