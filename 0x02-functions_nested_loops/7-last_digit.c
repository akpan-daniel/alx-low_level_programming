#include "main.h"

/**
 * print_last_digit - Return and print the last digit
 * @c: Full number
 * Return: Last digit of n
 * author: Akpan Daniel
 */
int print_last_digit(int c)
{
	c = c % 10;
	if (c < 0)
	{
		c = c * -1;
	}
	_putchar('0' + c);
	return (c);
}
