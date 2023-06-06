#include "main.h"
#define NULL 0

/**
 * _strpbrk - locates the first occurrance
 * @s: string to search
 * @accept: bytes
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
				return (s + x);
		}
	}
	return (NULL);
}
