#include "main.h"

/**
 * print_triangle - print triangle of variable length
 * @size: triangle height
 * Return: return nothing
 */
void print_triangle(int size)
{
	int i, a;

	a = size;
	if (size <= 0)
		_putchar('\n');
	while (size > 0)
	{
		for (i = 0; i < a; i++)
			_putchar((i < size - 1) ? ' ' : '#');
		_putchar('\n');
		size--;
	}
}
