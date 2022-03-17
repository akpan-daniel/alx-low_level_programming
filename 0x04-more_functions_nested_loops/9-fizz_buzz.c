#include <stdio.h>

/**
 * main - Fizz Buzz Program
 * Return: 0
 * author: Akpan Daniel
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
		{
			if ((num % 3) == 0)
			{
				printf("Fizz");
			}

			if ((num % 5) == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%i", num);
		}

		if (num < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
