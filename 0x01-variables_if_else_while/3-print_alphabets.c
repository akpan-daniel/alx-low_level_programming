#include <stdio.h>

/**
 * main - Print lower and upper case alphabets
 * author: Akpan Daniel
 * Return: 0
 */
int main(void)
{
char alpha = 'a';

while (alpha <= 'z')
{
putchar(alpha++);
}
alpha = 'A';

while (alpha <= 'Z')
{
putchar(alpha++);
}

putchar('\n');

return (0);
}
