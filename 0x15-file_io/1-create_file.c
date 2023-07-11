#include "main.h"

/**
 * create_file - creates a file with the given text content
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to the string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fs, len = 0, lenw;

	if (filename == NULL)
		return (-1);

	fs = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fs == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (*(text_content + len))
			len++;
		lenw = write(fs, text_content, len);
		if (lenw != len)
			return (-1);
	}

	close(fs);
	return (1);
}
