#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
		int x;

		int y;

		srand(time(0));
		x = rand() - RAND_MAX / 2;
		y = x % 10;
		if (y > 5)
			printf("Last digit of %d is %d and is greater than 5\n", x, y);
		if (y == 0)
			printf("Last digit of %d is %d and is 0\n", x, y);
		if (y < 6 && y != 0)
			printf("Last digit of %d is %d and is less than 6 and not 0\n", x, y);
		return (0);
}
