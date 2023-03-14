#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: counts the number of arguments
 * @argv: an array of strings thta contains the arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
