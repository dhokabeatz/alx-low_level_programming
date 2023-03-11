#include "main.h"

/**
 * _isdigit - Checks for a digit
 *
 * @c: The integer to be checked.
 *
 * Return: 1 if the number is a digit
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
