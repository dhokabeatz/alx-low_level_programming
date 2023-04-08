#include "main.h"


/*
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Ap poniter to the name of the file we want to write to
 *
 * @text_content: The string to be appended to the file
 *
 *
 * Return : If the function faus - -1
 * If the file doesn't exit the user lackers write permission - -1.
 * Else - 1
 * */



int append_text_to_file(const char *filename, char *text_content)
{
	int a, c, length = 0;


	if (filename == NULL)
		return(-1);

	if (text_content != NULL)
	{
		for(length =0; text_content[length];)
			length++;
	}


	a = open(filename, O_WRONLY | O_APPEND);
	c = write(a, text_content,length);

	if (a == -1 || c == -1)
		return (-1);


	close(a);

	return (1);
}
