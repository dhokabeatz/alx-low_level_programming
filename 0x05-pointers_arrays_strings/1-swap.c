#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers
 * @a: input 0
 * @b: input 1
 * Return: integers
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
