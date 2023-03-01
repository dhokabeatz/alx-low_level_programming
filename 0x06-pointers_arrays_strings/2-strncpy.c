#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: copy destination
 * @src: pointer to source string
 * @n: number of bytes to be used
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n--)
		*dest++ = *src++;
	if (!*src)
		while (*dest && n--)
			*dest++ = 0;
	return (ptr);
}
