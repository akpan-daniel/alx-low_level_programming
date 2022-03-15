#include "main.h"

/**
 * print_to_98 - Print numbers till 98
 * @n: starting number
 * Return: void
 * author: Akpan Daniel
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n > 10)
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
			else if (n < 0)
			{
				_putchar('-');
				if (n <= -10)
				{
					_putchar('0' + ((n / 10) * -1));
				}
				_putchar('0' + ((n % 10) * -1));
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
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n > 100)
			{
				_putchar('0' + ((n / 10) / 10));
				_putchar('0' + ((n / 10) % 10));
				_putchar('0' + n % 10);
			}
			else
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
			n--;
		}
	}
}
