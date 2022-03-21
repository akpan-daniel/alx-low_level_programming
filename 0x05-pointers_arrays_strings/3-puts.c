#include "main.h"

/**
 * _puts - Output string
 * @str: String to print
 * Return: void
 * author: Akpan Daniel
 */
void _puts(char *str)
{
	char null = '\0';
	int count;

	for (count = 0; ; count++)
	{
		if (*(str + count) == null)
		{
			_putchar('\n');
			break;
		}

		_putchar(*(str + count));
	}
}
