#include <stdio.h>

/**
 * main - prints the arguments receieved
 * @argc: counts the arguments
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a = 0;

	while (a < argc)
	{
		printf("%s\n", argv[a]);
			a++;
	}
	return (0);
}
