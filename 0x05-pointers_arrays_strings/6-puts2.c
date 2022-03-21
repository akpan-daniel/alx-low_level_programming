#include "main.h"

/**
 * puts2 - Output every other string
 * @str: String to print
 * Return: void
 * author: Akpan Daniel
 */
void puts2(char *str)
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
		if ((count % 2) == 0)
			_putchar(*(str + count));
	}
}
