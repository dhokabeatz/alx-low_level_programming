#include "main.h"

/**
 * print_last_digit - print the last digit
 *
 * @a: the int to print the last digit
 *
 * Return: value of the last digit
 */
int print_last_digit(int a)
{
	int i;

	if (a < 0)
	{
		a = -a;
		i = a % 10;
	}
	else
	{
		i = a % 10;
	}
	if (i < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
