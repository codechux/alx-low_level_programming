#include "main.h"

/**
 * reverse_array - reversing the content of an array
 * @n: size
 * @a: array pointer
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	while (i < n / 2)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
		i++;
	}
}
