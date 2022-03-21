#include "main.h"

/**
 * print_rev - Print string in reverse
 * @s: String to print
 * Return: void
 * author: Akpan Daniel
 */
void print_rev(char *s)
{
	int count;

	for (count = _strlen(s); count > 0; count--)
	{
		_putchar(*(s + count - 1));
	}
	_putchar('\n');
}
