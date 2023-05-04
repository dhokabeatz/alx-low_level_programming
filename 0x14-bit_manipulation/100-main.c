#include <stdio.h>
#include "main.h"
/**
* get_endianness- checks the endianness
* main(void) - where the process starts
*
* Return: 0 zero if big endian or 1 for little endian
*/
int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);
}
