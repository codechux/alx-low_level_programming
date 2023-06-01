#include "main.h"

/**
 * leet - encodes a string into numbers
 * @str: string to be processed
 * Description: each letters is represented by a number
 * Return: number
 */

char *leet(char *str)
{
	char charArr[] = "aAeEoOtTlL";
	char leetArr[] = "4433007711";
	int a;
	int b;

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; charArr[b] != '\0'; b++)
		{
			if (str[a] == charArr[b])
			{
				str[a] = leetArr[b];
				break;
			}
		}
	}
	return (str);
}
