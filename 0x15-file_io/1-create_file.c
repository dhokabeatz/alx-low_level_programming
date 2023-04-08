#include "main.h"


/*
 * create_file - creates a file
 * @filename : A pointer to the file we want to create by name
 * 
 * @text_content: A pointer to a string to write to the created file
 * */




int create_file(const char *filename, char *text_content)
{
	int a, c, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	c = write(a, text_content, length);

	if (a == -1 || c == -1)
		return (-1);

	close(a);

	return (1);
}
