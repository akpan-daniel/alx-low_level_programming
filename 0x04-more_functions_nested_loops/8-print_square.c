#include "main.h"

/**
 * print_square - Prints a square
 * Return: void
 * @size: Size of square
 * author: Akpan Daniel
 */
void print_square(int size)
{
	if (size > 0)
	{
		int row;

		for (row = 0; row < size; row++)
		{
			int col;

			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
