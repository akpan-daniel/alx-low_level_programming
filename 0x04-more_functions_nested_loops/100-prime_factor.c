#include <stdio.h>
#include <math.h>

/**
 * main - Largest whole number
 * Return: 0
 * author: Akpan Daniel
 */
int main(void)
{
	unsigned int long num = 612852475143;
	unsigned int long prime = (int) sqrt(num);
	

	for (;;)
	{
		if (num % prime == 0)
		{
			printf("%lu \n", num / prime);
			break;
		}
		prime--;
	}
	return (0);
}
