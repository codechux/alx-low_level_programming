#include <stdio.h>

/**
 * main - prints all the arguments in the function
 * @argc: size of command line arguments
 * @argv: the array containing the program command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
