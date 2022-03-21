#include "main.h"

/**
 * _strlen - Length of string
 * @s: String
 * Return: length of s
 * author: Akpan Daniel
 */
int _strlen(char *s)
{
	char terminating_null = '\0';
	int count = 0;

	while (1)
	{
		if (*(s + count) == terminating_null)
		{
			break;
		}
		count++;
	}

	return (count);
}
