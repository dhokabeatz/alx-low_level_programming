#include "main.h"
/**
* expo - calcalues the base to the power
* @base: base of the power
* @exp: power of the exponent
*
* Return: value of the exponent
*/

unsigned long int expo(unsigned int base, unsigned int exp)
{
	unsigned long int number, counter;

	number = 1;
	for (counter = 1; counter <= exp; counter++)
		number *= base;
	return (number);
}

/**
* print_binary - prints a number in binary notation
* @n: number to print
*
* Return: void
*/


void print_binary(unsigned long int n)
{
	unsigned long int div;
	unsigned long int ch;
	char prompt;

	prompt = 0;
	div = expo(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 2)
	{
		ch = n & div;
		if (ch == div)
		{
			prompt = 1;
			_putchar('1');
		}
		else if (prompt == 1 || div == 1)
		{
			_putchar ('0');
		}
		div >>= 1;
	}

}
