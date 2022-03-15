#include "main.h"

/**
 * times_table - Print 9 times table
 * Return: void
 * author: Akpan Daniel
 */
void times_table(void)
{
	int row;
	int col;
	int result = 0;

	for (col = 0; col < 10; col++)
	{
		for (row = 0; row < 10; row++)
		{
			result = row * col;
			if (result >= 10)
			{
				int first = result / 10;
				int last = result % 10;
				_putchar('0' + first);
				_putchar('0' + last);
			}
			else
			{
				if (row > 0)
				{
					_putchar(' ');
				}
				_putchar('0' + (row * col));
			}
			if (row != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
