#include "main.h"

/**
 * _strcat - Append string dest by string src
 * @dest: String to be extended
 * @src: String to be appended
 * Return: char
 * author: Akpan Daniel
 */
char _strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = src[i];

	return dest;
}
