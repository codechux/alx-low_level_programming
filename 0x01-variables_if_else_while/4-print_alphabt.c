#include <stdio.h>

/**
 * main - Entry point
 * Description: print lowercase alphabets and uppercase
 * Return: 0 (success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'q' && alpha != 'c')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);

}
