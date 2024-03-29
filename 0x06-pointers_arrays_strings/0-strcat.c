#include "main.h"

/**
 * _strcat - joins two strings
 * @src: string to copy
 * @dest: copied string
 * Return: pointer to result address
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
