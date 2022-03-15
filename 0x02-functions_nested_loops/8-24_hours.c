#include "main.h"

/**
 * jack_bauer - Print all possible time
 * Return: void
 * author: Akpan Daniel
 */
void jack_bauer(void)
{
	int f_hour;
	int l_hour;
	int f_min;
	int l_min;
	int limit = 10;

	for (f_hour = 0; f_hour < 3; f_hour++)
	{
		for (l_hour = 0; l_hour < limit; l_hour++)
		{
			for (f_min = 0; f_min < 6; f_min++)
			{
				for (l_min = 0; l_min < 10; l_min++)
				{
					_putchar('0' + f_hour);
					_putchar('0' + l_hour);
					_putchar(':');
					_putchar('0' + f_min);
					_putchar('0' + l_min);
					_putchar('\n');
				}
			}
			if (f_hour == 2)
			{
				limit = 4;
			}
		}
	}
}
