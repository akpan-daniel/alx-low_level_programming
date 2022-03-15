#include "main.h"

/**
 * _isalpha - Check for alphabet
 * @c: character to test
 * Return: 1 if lower or upper case else 0
 * author: Akpan Daniel
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
