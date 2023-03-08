#include "main.h"

/**
 * factorial - prints recursively
 * @n: arguement of the function
 * Return: the factorial of the given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
