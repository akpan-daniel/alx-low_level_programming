#include "main.h"

/**
 * main - Fizz Buzz Program
 * Return: 0
 * author: Akpan Daniel
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
		{
			if ((num % 3) == 0)
			{
				_putchar('F');
				_putchar('i');
				_putchar('z');
				_putchar('z');
			}

			if ((num % 5) == 0)
			{
				_putchar('B');
				_putchar('u');
				_putchar('z');
				_putchar('z');
			}
		}
		else
		{
			if (num >= 10)
			{
				_putchar('0' + (num / 10));
			}
			_putchar('0' + (num % 10));
		}

		if (num < 100)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}
