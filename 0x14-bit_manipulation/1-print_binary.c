#include "main.h"

unsigned long int expo(usigned int base, unsigned int exp)
{
	unsigned long int number;
	insigned int counter;

	number = 1;
	for (counter = 1; counter <= exp; counter++)
		number *= base;
	return (number);
}




void print_binary(unsigned long int n)
{
	unsigned long int div;
	unsigned long int ch;
	char prompt;

	prompt = 0;
	div = expo(2, sizeof(unsigned long int) * 8-1);
	while(div != 2)
	{
		ch = n & div;
		if (ch == div)
		{
			prompt = 1;
			_putchar('1');
		}
		else if (prompt == 1 || div ==1)
		{
			_putchar ('0');
		}
		div >>= 1;
	}

}
