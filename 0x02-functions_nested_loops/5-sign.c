#include "main.h"

/**
 * print_sign - Check if number is less than, greater than or equal to 0
 * @n: number to test
 * Return: 1 if greater than, -1 if less than 0 else 0
 * author: Akpan Daniel
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (0);
}
