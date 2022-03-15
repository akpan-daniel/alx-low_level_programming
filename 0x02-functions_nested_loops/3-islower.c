#include "main.h"

/**
 * _islower - Check for lowercase letter
 * Return: 1 if lowercase else 0
 * author: Akpan Daniel
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
