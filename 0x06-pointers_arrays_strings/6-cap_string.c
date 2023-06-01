#include "main.h"

int is_sep(char ch);
/**
 * cap_string - capitalizes all words of a string
 * @str: string to be processed
 * Description: separators of words use: space, tabulation, new line
 * Return: string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
		str[i] -= 32;
	for (i = 1; str[i] != '\0'; ++i)
	{
		if (is_separate(str[i - 1]))
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
	}
	if (str[i - 1] >= 97 && str[i - 1] <= 122)
		str[i - 1] -= 32;
	return (str);
}

/**
 * is_separate - checks for separator
 * @ch: character to be processed
 * Return: 1 if separator, else 0
 */
int is_separate(char ch)
{
	char sep[] = " \n\t.,;!?\"()[]";
	int x;

	for (x = 0; sep[x] != '\0'; x++)
	{
		if (sep[x] == ch)
			return (1);
	}
	return (0);
}
