#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int a, b, len1, len2;

	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a]; a++)
			;
	}
	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b]; b++)
			;
	}
	len1 = 1 + a + b;
	s = malloc(len1 * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (len2 = 0; len2 < a; len2++)
		s[len2] = s1[len2];
	for (len2 = 0; len2 < b; len2++)
		s[len2 + a] = s2[len2];
	s[a + b] = '\0';
	return (s);
}
