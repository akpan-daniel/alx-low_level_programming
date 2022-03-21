#include "main.h"

/**
 * swap_int - Swap the values
 * @a: First digit ti be swapped
 * @b: Second digit to be swapped
 * Return: void
 * author: Akpan Daniel
 */
void swap_int(int *a, int *b)
{
	int *temp;

	temp = a;
	*a = *b;
	*b = *temp;
}
