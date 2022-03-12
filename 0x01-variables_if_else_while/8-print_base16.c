#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print digits in base 10
 * author: Akpan Daniel
 * Return: 0
 */
int main(void)
{
	int num;
	char el;
	for (num = 48; num < 58; num++)
		putchar(num);
	for (el = 'a'; el <= 'f'; el++)
		putchar(el);
	putchar('\n');
	return (0);
}
