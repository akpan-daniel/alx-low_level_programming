#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print digits in base 10
 * author: Akpan Daniel
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 9; num++)
	{
		int den;

		for (den = num + 1; den < 10; den++)
		{
			putchar(num + 48);
			putchar(den + 48);
			if (num != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
