#include "main.h"

/**
 * _isdigit - check if character is digit
 * @c: character to be processed
 * Return: 1 if c is uppercase, else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
