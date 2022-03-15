#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print numbers till 98
 * @n: starting number
 * Return: void
 * author: Akpan Daniel
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%i, ", n);
		}
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%i, ", n);
		}
	}
	printf("98\n");
}
