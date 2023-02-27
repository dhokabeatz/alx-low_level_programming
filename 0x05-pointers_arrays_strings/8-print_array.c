#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array integers
 * @a: input array
 * @n: input n elements
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n");
}
