#include "main.h"

/**
 * read_textfile - Reads a text file and prints to POSIX STDOUT
 * @filename: The filename to open
 * @letters: The number of letters to read and print
 * Return: The number of letters read and printed, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	r = read(fd, buff, letters);

	if (fd == -1 || r == -1)
	{
		free(buff);
		return (0);
	}

	w = write(STDOUT_FILENO, buff, r);
	free(buff);
	close(fd);

	if (w == -1)
		return (0);
	return (w);
}
