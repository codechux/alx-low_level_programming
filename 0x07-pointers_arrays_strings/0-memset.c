#include "main.h"

/**
 * _memset - fills the first n bytes of the memory
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; ++x)
		*(s + x) = b;
	return (s);
}
