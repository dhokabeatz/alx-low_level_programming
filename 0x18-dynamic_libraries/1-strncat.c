#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str:a string of length to be returned
 * Return: returns the length of a string
 */
/*int _strlen(char *str)
{
	int length = 0;

	while (*str)
	{
		str++;
		length++;
	}
	return (length);
}
*/
/**
 * _strncat - concatenate the string of two
 * @dest: pointer to destination sring
 * @src: pointer to source string
 * @n: number of byte to be concatenated
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *cat = dest + _strlen(dest);
	int length;

	if (n > _strlen(src) + _strlen(dest))
		length =  _strlen(dest) + _strlen(src);
	else
		length = _strlen(dest) + n;
	while (*src && n > 0)
	{
		*cat += *src;
		src++;
		cat++;
		n--;
	}
	if (n > 0)
		*cat += '\0';
	cat -= (length);
	*dest = *cat;
	return (cat);
}
