#include "main.h"

/**
 * append_text_to_file - Appends text at the end to the  file
 * @filename: The filename to append
 * @text_content: String to add
 * Return: 1 on success, -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
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
