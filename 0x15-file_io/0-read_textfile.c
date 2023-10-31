#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POXIS
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed, returns 0 at failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int n;
	ssize_t rd, wrt;
	char *buf;

	if (!filename)
	{
		return (0);
	}
	n = open(filename, O_RDONLY);

	if (n == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * (letters));

	if (!buf)
	{
		return (0);
	}
	rd = read(n, buf, letters);
	wrt = write(STDOUT_FILENO, buf, rd);

	close(n);

	free(buf);

	return (wrt);
}
