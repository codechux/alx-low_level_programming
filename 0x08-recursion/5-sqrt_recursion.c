#include "main.h"


/**
 * _square_root - finds square root of number
 * @n: number to find square root of
 * @x: tests square root of number
 * Return: square root of n
 *
 */
int _square_root(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (_square_root(n, x + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (_square_root(n, 1));
}
