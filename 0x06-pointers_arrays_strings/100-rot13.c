#include "main.h"

/**
 * rot13 - enconding strings with the rot13 code
 * @rot: the input from the function
 * Return: the redifined string
 */

char *rot13(char *rot)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *red = rot;
	int i;

	while (*rot)
	{
		for (i = 0; i < 53; i++)
		{
			if (*rot == alpha[i])
			{
				*rot = rot13[i];
				break;
			}
		}
		rot++;
	}
	return (red);
}
