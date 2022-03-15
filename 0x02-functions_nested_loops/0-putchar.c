#include "main.h"

int main(void)
{
	char[9] word = "_putchar";
	int n;
	for(n = 0; n < 10; n++)
	{
		_putchar(word[n]);
	}
	_putchar('\n');
	return (0);
}
