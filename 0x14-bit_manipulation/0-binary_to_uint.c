#include "main.h"

unsigned int binary_to_uint(const char *n)
{
	int counter;
	unsigned int binary_number;

	binary_number = 0;
	if (!n)
		return (0);
	for (counter = 0; n[counter] != '\0'; counter++)
	{
		if (n[counter] != '0' && n[counter] != '1')
			return (0);
	}
	for (counter = 0; n[counter] != '\0'; counter++)
	{
		binary_number <<= 1;
		if (n[counter] == '1')
			binary_number += 1;
	}
	return (binary_number);
}
