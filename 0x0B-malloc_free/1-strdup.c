#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string to a newly allocated space in memory
 * @str: string to copy
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *s;
	int x;
	int y;

	if (str == NULL)
		return (NULL);
	y = 0;
	while (*(str + y++))
		;
	s = malloc(y * sizeof(char));
	if (s == NULL)
		return (NULL);

	x = 0;
	while (*(str + x))
	{
		*(s + x) = *(str + x);
		x++;
	}
	*(s + x) = '\0';
	return (s);
}
