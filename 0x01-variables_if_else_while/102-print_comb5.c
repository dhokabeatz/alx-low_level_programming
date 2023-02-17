#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;

	a = 0;
	b = a;
	while (a < 10)
	{
		while (b < 10)
		{
			c = a;
			d = b + 1;
			while (c < 10)
			{
				while (d < 10)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if ((a == 9) && (b == 8) && (c == 9) && (d == 9))
						;
					else
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				d = 0;
				c++;
			}
			b++;
		}
		b = 0;
		a++;
	}
	putchar('\n');
	return (0);
}
