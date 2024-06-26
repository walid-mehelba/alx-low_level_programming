#include <stdio.h>
#include "main.h"

/**
  * print_sum_natural - print sum of all natural numbers multiplies of 3 or 5.
  * Return: void
  */

void print_sum_natural(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
			printf("%d\n", sum);
		}
	}
}
