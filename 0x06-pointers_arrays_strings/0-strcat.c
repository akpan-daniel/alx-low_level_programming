#include "main.h"

/**
 * _strcat - Append string dest by string src
 * @dest: String to be extended
 * @src: String to be appended
 * Return: char *
 * author: Akpan Daniel
 */
char *_strcat(char *dest, char *src)
{
int a = -1, i;

for (i = 0; dest[i] != '\0'; i++)
	;

do {
	a++;
	dest[i] = src[a];
	i++;
} while (src[a] != '\0');

return (dest);
}
