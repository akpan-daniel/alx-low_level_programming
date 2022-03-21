#include "main.h"

/**
 * print_rev - Print string in reverse
 * @s: String to print
 * Return: void
 * author: Akpan Daniel
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count])
		count++;

	while (count--)
		_putchar(s[count]);
	_putchar('\n');
}
