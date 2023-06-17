#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string source
 * @s2: string destination
 * @n: number of bytes
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, len1, len2;
	char *a;

	len1 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x]; ++x)
		len1++;
	len2 = len1 + n;
	a = malloc(sizeof(char) * (len2 + 1));
	if (!a)
		return (NULL);
	for (x = 0; x < len1; x++)
	{
		a[x] = s1[x];
	}
	for (y = 0; y < n; y++, x++)
	{
		a[x] = s2[y];
	}
	a[x] = '\0';
	return (a);
}
