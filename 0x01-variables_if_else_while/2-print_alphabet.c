#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print lowercase alphabets
 * author: Akpan Daniel
 * Return: 0
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
