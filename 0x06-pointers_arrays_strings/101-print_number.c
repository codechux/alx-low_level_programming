#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input number
 * Return: void
 */

void print_number(int n)
{
	unsigned int num, div, count;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	div = num;
	count = 1;

	while (div > 9)
	{
		div /= 10;
		count *= 10;
	}

	while (count >= 1)
	{
		_putchar(((num / count) % 10) + '0');
		count /= 10;
	}
}
