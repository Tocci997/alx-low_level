#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writen in the file.
 *
 * Return: 1 on success. -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int n;
	int no_letters;
	int rwr;

	if (!filename)
	{
		return (-1);
	}
	n = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (n == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	for (no_letters = 0; text_content[no_letters]; no_letters++)
		;

	rwr = write(n, text_content, no_letters);

	if (rwr == -1)
	{
		return (-1);
	}
	close(n);

	return (1);
}
