#include "main.h"

/**
 * print_diagonal - Print diagonal lines
 * Return: void
 * @n: Number of diagonals to print
 * author: Akpan Daniel
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int count;

		for (count = 0; count < n; count++)
		{
			int count_2;

			for (count_2 = 0; count_2 < count; count_2++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
