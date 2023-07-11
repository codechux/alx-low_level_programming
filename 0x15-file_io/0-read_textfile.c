#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_r, num_w;
	int fs;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fs = open(filename, O_RDONLY);
	if (fs == -1)
	{
		free(buff);
		return (0);
	}

	num_r = read(fs, buff, letters);
	if (num_r == -1)
	{
		free(buff);
		close(fs);
		return (0);
	}

	num_w = write(STDOUT_FILENO, buff, num_r);
	if (num_w == -1 || num_w != num_r)
	{
		free(buff);
		close(fs);
		return (0);
	}

	free(buff);
	close(fs);
	return (num_w);
}
