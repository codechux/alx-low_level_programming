#include "main.h"

/**
 * _strncat - joins two strings
 * @n: number of bytes
 * @src: string to copy from
 * @dest: string to copy to
 * Return: a pointer result address
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
