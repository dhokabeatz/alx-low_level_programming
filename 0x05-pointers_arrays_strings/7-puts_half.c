#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints second half of string
 * @str: pointer to string
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, length, half;

	if (*str != '\0')
	{
		length = 0;
		while (*(str + length) != '\0')
		{
			length++;
		}
		if (length % 2 == 0)
			half = length / 2;
		else
			half = length - (length - 1) / 2;
		i = half;
		if (length == 1)
			_putchar(*str);
		else
		{
			while (*(str + i) != '\0')
			{
				_putchar(*(str + i));
				i++;
			}
		}
	}
	_putchar('\n');
}
