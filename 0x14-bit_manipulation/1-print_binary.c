#include "main.h"

/**
 * print_binary - prints the binary representation
 * @n: unsigned long int.
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (!flag)
	{
		_putchar('0');
	}
}
