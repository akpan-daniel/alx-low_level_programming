#include "main.h"

/**
 * print_most_numbers - Print 0 - 9 excluding 2 and 4
 * Return: void
 * author: Akpan Daniel
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}

		_putchar('0' + num);
	}

	_putchar('\n');
}
