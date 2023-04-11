#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"

/**
 * main - check the code for Holberton School students.
 * @author : @dhokabeatz
 * @argc: num of args
 * @argv: args
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int whereFrom, whereTo, on_closing, c, b;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	whereTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (whereTo == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
	whereFrom = open(argv[1], O_RDONLY);
	if (whereFrom == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
	while (1)
	{
		b = read(whereFrom, buffer, 1024);
		if (b == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
		if (b > 0)
		{
			c = write(whereTo, buffer, b);
			if (c == -1)
				dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
		} else
			break;
	}
	on_closing = close(whereFrom);
	if (on_closing == -1)
		dprintf(STDERR_FILENO, "Error: Can't close folder %d\n", from), exit(100);
	on_closing = close(whereTo);
	if (on_closing == -1)
		dprintf(STDERR_FILENO, "Error: Can't close folder %d\n", to), exit(100);
	return (0);
}
