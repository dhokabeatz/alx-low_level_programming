#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates random valid password
 * Return: 0
 */
int main(void)
{
	int sum = 0;
	char c;

	srand(time(NULL));
	while (sum < 2772)
	{
		c = rand() % 94 + 33;
		putchar(c);
		sum += c;
	}
	putchar(2772 - sum);
	return (0);
}
