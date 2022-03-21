#include "main.h"

/**
 * rev_string - Reverse string
 * @s: String to reverse
 * Return: void
 * author: Akpan Daniel
 */
void rev_string(char *s)
{
	int i, half, count;
	char temp;

	for (count = 0; s[count] != '\0'; count++)
		;

	i = 0;

	half = count / 2;

	while (half--)
	{
		temp = s[count - i - 1];
		s[count - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
