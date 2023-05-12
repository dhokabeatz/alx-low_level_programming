#include "main.h"

/**
 * create_file - Creates a file
 * @filename: The filename to create
 * @text_content: String to write to the file
 * Return: 1 on success, -1 if fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	w = write(fd, text_content, len);
	close(fd);
	if (w == -1)
		return (-1);
	return (1);
}
