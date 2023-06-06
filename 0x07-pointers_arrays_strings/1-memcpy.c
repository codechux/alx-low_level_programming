#include "main.h"

/**
 * _memcpy - copy memory area
 * @n: number of bytes
 * @src: memory area source
 * @dest: memory area dest
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(dest + x) = *(src + x);
	return (dest);
}
