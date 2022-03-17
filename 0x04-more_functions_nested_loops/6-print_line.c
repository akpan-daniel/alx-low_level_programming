#include "main.h"

/**
 * print_line - Print dash lines
 * Return: void
 * @n: Number of dashes to print
 * author: Akpan Daniel
 */
void print_line(int n)
{
	for (n = n; n > 0; n--)
	{
		_putchar('_');
	}

	_putchar('\n');
}
