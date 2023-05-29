#include "main.h"

/**
 * puts_half - prints second half of a string
 * Description: if the number of characters are odd
 * @str: string to be processed
 */
void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = (i + 1) / 2; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
