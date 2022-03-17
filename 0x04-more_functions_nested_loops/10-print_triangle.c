#include "main.h"

/**
 * print_triangle - Print triangle
 * Return: void
 * @size: Size of the triangle
 * author: Akpan Daniel
 */
void print_triangle(int size)
{
	if  (size > 0)
	{
		int row;
		int count = size - 1;

		for (row = 0; row < size; row++)
		{
			int col;

			for (col = 0; col < size; col++)
			{
				if (col >= count)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			--count;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
