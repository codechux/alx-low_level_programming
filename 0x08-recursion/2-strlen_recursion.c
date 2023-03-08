#include "main.h"

/**
 * _strlen_recursion -prints the length of a string
 * @s: arguement the function
 * Return: add 1 to the rest of the string which is computed by calling the
 * function recursively
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
