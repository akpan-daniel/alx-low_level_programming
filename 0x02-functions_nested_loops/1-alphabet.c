#include "main.h"

/**
 * print_alphabet - Output a-z to console
 * Return: 0
 * author: Akpan Daniel
 */
void main(void)
{
	char word = 'a';

	while (word <= 'z')
	{
		_putchar(word++);
	}
	_putchar('\n');
}
