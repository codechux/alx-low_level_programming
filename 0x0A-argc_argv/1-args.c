#include <stdio.h>

/**
 * main - prints the length of arguments passed
 * @argc: counts the arguments passed
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
