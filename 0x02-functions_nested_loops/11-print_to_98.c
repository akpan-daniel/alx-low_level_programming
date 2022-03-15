#include "main.h"

/**
 * print_to_98 - Print numbers till 98
 * @n: starting number
 * Return: void
 * author: Akpan Daniel
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n > 10)
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		else
		{
			_putchar('0' + n);
		}

		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar('\n');
		}
	}
}
