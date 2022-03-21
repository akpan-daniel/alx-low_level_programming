#include "main.h"

/**
 * rev_string - Reverse string
 * @s: String to reverse
 * Return: void
 * author: Akpan Daniel
 */
void rev_string(char *s)
{
	int i, half, count = 0;
	char temp;

	while (s[count])
		count++;

	half = count / 2;

	while (half--)
	{
		temp = s[count - i - 1];
		s[count - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
