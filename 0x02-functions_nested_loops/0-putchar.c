#include "main.h"

/**
 * main - Output '_putchar' to console
 * Return: 0
 * author: Akpan Daniel
 */
int main(void)
{
	char word[] = "_putchar";
	int n;

	for (n = 0; n < 8; n++)
	{
		_putchar(word[n]);
	}
	_putchar('\n');
	return (0);
}
