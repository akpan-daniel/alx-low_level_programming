#include "main.h"

/**
 * print_integer - Print an integer
 * Return: void
 * @n: Integer to print
 * author: Akpan Daniel
 */
void print_integer(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	int power = 1, num = 0, num_2 = 0;

	while (n / power != 10)
	{
		power *= 10;
		num++;
	}

	while (num_2 < num)
	{
		_putchar('0' + n / power);
		n = n - (n / power) * power;
		power /= 10;
		num_2--;
	}

	if (num == 0)
		_putchar('0' + n);



}
