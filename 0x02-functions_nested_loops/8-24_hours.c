#include "main.h"

/**
  * jack_bauer - print every minute of the day.
  * Return: void.
  */

void jack_bauer(void)
{
	int h1, h2, m1, m2;

	for (h1 = 0; h1 <3; h1++)
	{
		if (h1 != 2)
		{
			for (h2 = 0; h2 < 10; h2++)
			{
				for (m1 = 0; m1 < 6; m1++)
				{
					for (m2 = 0; m2 < 10; m2++)
					{
						_putchar(h1);
						_putchar(h2);
						_putchar(':');
						_putchar(m1);
						_putchar(m2);
					}
				}
			}
		}
		else
		{
			for (h2 = 0; h2 < 4; h2++)
			{
				for (m1 = 0; m1 < 6; m1++)
				{
					for (m2 = 0; m2 < 10; m2++)
					{
						_putchar(h1);
						_putchar(h2);
						_putchar(':');
						_putchar(m1);
						_putchar(m2);
					}
				}
			}
		}
	}
}
