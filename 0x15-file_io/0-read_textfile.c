#include "main.h"

/**
*read_textfile - reads a text file and prins it to the terminal
*@filename: name of the file to be read
*@letter: number of letters it should read
*Return: actual number of letters it could read and print at the terminal
*/


ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_data;
	ssize_t len;
	ssize_t len_w;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	file_data = open(filename, O_RDONLY);
	if (file_data == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char ) * letters);

	if (buffer == NULL)
    	{
        	close(file_data);
        	return (0);
    	}

	len = read(file_data, buffer, letters);

	if (len == -1)
	{
		free(buffer);
		return (0);
	}

	len_w = write(STDOUT_FILENO, buffer, len);
	free(buffer);

	if (len != len_w)
	{
		return (0);
	}
	return (len_w);

}
