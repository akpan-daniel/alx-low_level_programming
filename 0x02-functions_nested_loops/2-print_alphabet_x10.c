#include "main.h"

/**
 * print_alphabet_x10 - Output a-z 10x to console
 * Return: 0
 * author: Akpan Daniel
 */
void print_alphabet_x10(void)
{
	int n;

	for (n = 1; n <= 10; n++)
	{
		char word = 'a';

		while (word <= 'z')
		{
			_putchar(word++);
		}
		_putchar('\n');
	}
}
