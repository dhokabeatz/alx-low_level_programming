#include "main.h"

/**
 * print_diagonal - print a diagonal line of variable length
 * @n: length of line
 * Return: return nothing
 */
void print_diagonal(int n)
{
	int a = 0, s;

	if (n > 0)
	{
		while (a < n)
		{
			for (s = 0; s < a; s++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	else
		_putchar('\n');
}
