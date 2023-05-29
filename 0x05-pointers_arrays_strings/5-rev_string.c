#include "main.h"

/**
 * rev_string - reverses a string
 * @str: string to be processed
 */
void rev_string(char *str)
{
	int i;
	int len;
	char tem;

	len = _strlen(str);
	for (i = 0; i < len / 2; i++)
	{
		tem = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tem;
	}
}

/**
 * _strlen - determine the length of the string
 * @str: string to be processed
 * Return: length of string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
