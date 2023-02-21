#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int k;
	char l;

	for (k = 0; k < 10; k++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
