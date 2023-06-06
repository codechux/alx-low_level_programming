#include "main.h"
#define NULL 0

/**
 * _strchr - locates a chracter in a string
 * @s: string to search
 * @c: character to locate
 * Return:pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
