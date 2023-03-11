#include "main.h"

/**
 * _strncat - a function that concatenate two strings
 * but add inputted number of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at end of dest
 * @n:integer parameter
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest_length = 0;

	while (dest[index++])
		dest_length++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_length++] = src[index];

	return (dest);

}
