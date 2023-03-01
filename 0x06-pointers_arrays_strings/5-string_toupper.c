#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to be processed
 * Return: string
 */

char *string_toupper(char *str)
{
	char *a = str;

	while (*a)
	{
		if (islower(*a))
		{
			*a = toupper(*a);
		}
		a++;
	}
	return (str);
}
