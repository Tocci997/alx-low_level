#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: appended content.
 *
 * Return: 1 if the file exists. -1 if the file does not exist
 * or on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n;
	int no_letters;
	int rwr;

	if (!filename)
	{
		return (-1);
	}
	n = open(filename, O_WRONLY | O_APPEND);

	if (n == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (no_letters = 0; text_content[no_letters]; no_letters++)
			;
		{
			rwr = write(n, text_content, no_letters);
		}
		if (rwr == -1)
		{
			return (-1);
		}
	}

	close(n);

	return (1);
}
