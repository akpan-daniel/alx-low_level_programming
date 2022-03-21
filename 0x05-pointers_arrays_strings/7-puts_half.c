#include "main.h"

/**
 * puts_half - Output half a string
 * @str: String to print
 * Return: void
 * author: Akpan Daniel
 */
void puts_half(char *str)
{
	int count, half;

	for (count = 0; str[count] != '\0'; count++)
		;

	if ((count % 2) == 1)
		half = (count - 1) / 2;
	else
		half = count / 2;

	for (; half < count; half++)
	{
		_putchar(*(str + half));
	}

	_putchar('\n');
}
