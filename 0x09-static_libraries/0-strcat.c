#include "main.h"

/**
 *_strcat - a function that concatenates two strings
 *@dest: String that will be appended
 *@src: String to be concatenated
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_length = 0;

	while (dest[index++])
		dest_length++;

	for (index = 0; src[index]; index++)
		dest[dest_length++] = src[index];

	return (dest);
}
