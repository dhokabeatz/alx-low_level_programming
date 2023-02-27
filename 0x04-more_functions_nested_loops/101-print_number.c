#include "main.h"

/**
 * print_number - prints an integer using putchar
 * @n: integer to print
 * Return: return nothing
 */
void print_number(int n)
{
	int div, last_digit, tmp, lenght;

	/* calcualating last digit */
	last_digit = n % 10;
	/* if negative print '-' and make last digit positive */
	if (last_digit < 0)
	{
		_putchar('-');
		last_digit = last_digit * (-1);
	}
	/* calculate the number without the last digit and make positive */
	n = (n / 10);
	if (n < 0)
	{
		n = n * (-1);
	}
	/* calculate the length of a number and div to divide it with */
	lenght  = 0;
	div = 1;
	tmp = n;
	while (tmp > 0)
	{
		lenght += 1;
		div *= 10;
		tmp = tmp / 10;
	}
	/* make div one digit shorter than lenght */
	div = div / 10;
	while (div >= 1)
	{
		_putchar(n / div + '0');
		n = n % div;
		div /= 10;
	}
	_putchar(last_digit + '0');
}
