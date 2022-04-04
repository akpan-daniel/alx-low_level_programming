#include "main.h"

/**
* *create_array - Create a char array
* @size: size of the array
* @c: character to fill
* Return: pointer to the array
* author: Akpan Daniel
**/

char *create_array(unsigned int size, char c)
{
	char *str = malloc(sizeof(char) * size);

	while (size--)
	{
		str[size] = c;
	}

	return (str);
}
