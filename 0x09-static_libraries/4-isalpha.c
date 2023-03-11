#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: Alphabetic character
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
