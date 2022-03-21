#include "main.h"

/**
 * _strcpy - Copy string
 * @src: String to be copied
 * @dest: String
 * Return: void
 * author: Akpan Daniel
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
