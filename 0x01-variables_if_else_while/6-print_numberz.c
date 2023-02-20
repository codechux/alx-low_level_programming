#include <stdio.h>

/**
 * main - Entry point
 * Description: print number 0 to 9
 * Return: 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
