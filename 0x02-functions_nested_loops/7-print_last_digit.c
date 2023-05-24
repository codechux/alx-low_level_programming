#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @num: variable integer
 *
 * Return: last digit of num
 */
int print_last_digit(int num)
{
	int result;

	result = num % 10;
	if (result < 0)
		result = -result;
	_putchar('0' + result);
	return (result);
}
