#include "main.h"

/**
 * _isdigit - Check if input is digit
 * @c: Number to test
 * Return: 1 if c is digit else 0
 * author: Akpab Daniel
 */
int _isdigit(int c)
{
	return (c >= 48 && c <= 57 ? 1 : 0);
}
