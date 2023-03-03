#include "main.h"

/**
 * leet - function coverts strings to leet
 * @words: the input receive from the function
 * Return: the transformed str @words
 */


char *leet(char *words)
{
	char *str = words;
	char letters[] = {'A', 'E', 'O', 'T', 'L'};
	int leet[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*words)
	{
		for (i = 0; i < sizeof(letters) / sizeof(char); i++)
		{
			if (*words == letters[i] || *words == letters[i] + 32)
			{
				*words = 48 + leet[i];
			}
		}
		words++;
	}
	return (str);
}
