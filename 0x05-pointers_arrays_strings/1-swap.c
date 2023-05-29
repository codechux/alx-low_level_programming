#include "main.h"

/**
 * swap_int - swaping the values of two integers
 * @a: points to first value
 * @b: points to second value
 */

void swap_int(int *a, int *b)
{
	int tem;

	tem = *a;
	*a = *b;
	*b = tem;
}
