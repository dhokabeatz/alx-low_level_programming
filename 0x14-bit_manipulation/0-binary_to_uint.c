#include "main.h"
/**
*
* binary_to_uint - converts number in base two to an uinsigned int.
* @n: pointer to a string containing the number in base 2
*
* Return: unsigned int with a decimal value of number in base 2 or 0 if error 
*/ 

unsigned int binary_to_uint(const char *b)
{
	int counter;
	unsigned int binary_number;

	binary_number = 0;
	if (!b)
		return (0);
	for (counter = 0; b[counter] != '\0'; counter++)
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);
	}
	for (counter = 0; b[counter] != '\0'; counter++)
	{
		binary_number <<= 1;
		if (b[counter] == '1')
			binary_number += 1;
	}
	return (binary_number);
}
