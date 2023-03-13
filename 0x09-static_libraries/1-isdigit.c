#include "main.h"

/**
 * _isdigit - checks if int c is a digit
 *
 * @c: integer c
 *
 * Return: 1 if true or 0 if false
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	return (0);
}
