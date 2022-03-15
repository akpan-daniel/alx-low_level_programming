#include "main.h"

/**
 * main - Output '_putchar' to console
 * Return: 0
 * author: Akpan Daniel
 */
int main(void)
{
	char word[9] = "_putchar";
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(word[n]);
	}
	_putchar('\n');
	return (0);
}
