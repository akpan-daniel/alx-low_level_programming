#include "main.h"

/**
 * more_numbers - Print 0 - 14 10x
 * Return: void
 * author: Akpan Daniel
 */
void more_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		int num;

		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
			{
				_putchar('0' + num / 10);
			}
			_putchar('0' + num % 10);
		}

		_putchar('\n');
	}
}
