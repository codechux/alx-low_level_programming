#include "main.h"

/**
 * _strncpy - copies as string
 * @n: number of bytes
 * @dest: string copied
 * @src: string copy
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
