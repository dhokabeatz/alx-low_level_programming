#include "main.h"

/**
 * print_line - print line of variable length
 * @n: length of line
 * Return: return nothing
 */
void print_line(int n)
{
	int a;

	if (n > 0)
		for (a = 0; a < n; a++)
			_putchar('_');
	_putchar('\n');
}
