#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: a program's number of arguments
 * @argv: an array of arguments(args vector)
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int fp_r, fp_w, q, v, r;
	char BUFF[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp_r = open(argv[1], O_RDONLY);
	if (fp_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fp_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fp_r, BUFF, BUFSIZ)) > 0)
	{
		if (fp_w < 0 || write(fp_w, BUFF, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't wite to %s\n", argv[2]);
			close(fp_r);
			exit(97);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	q = close(fp_r);
	v = close(fp_w);
	if (q == -1 ||  v == -1)
	{
		if (q == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_r);
		if (v == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_w);
		exit(100);
	}
	return (0);
}
