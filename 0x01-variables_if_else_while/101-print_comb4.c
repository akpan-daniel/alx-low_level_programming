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

	for (num = 0; num < 8; num++)
	{
		int den;

		for (den = num + 1; den < 9; den++)
		{
			int last;

			for (last = den + 1; last < 10; last++)
			{
				putchar(num + 48);
				putchar(den + 48);
				putchar(last + 48);
				if (num != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
