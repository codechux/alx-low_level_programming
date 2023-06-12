#include <stdio.h>

/**
 * main - number of arguments passed into the function
 * @argc: size of command line arguments
 * @argv: the array containing the program command line arguments
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
