#include "main.h"

/**
 * print_array - Print n elements of array
 * @a: Pointer to array of ints
 * @n: Elements to print
 * Return: void
 * author: Akpan Daniel
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (n-- ; n >= 0; n--)
	{
		printf("%d", a[i]);
		if (n > 0)
			printf(", ");
	}
	printf("\n");
}
