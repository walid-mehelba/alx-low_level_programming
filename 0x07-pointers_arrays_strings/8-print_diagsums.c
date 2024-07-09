#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - prints the sum of the two diagonals
  * @a: array
  * @size: size of array
  */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	while (i < size)
	{
		while (j < size)
		{
			sum1 += a[i][j];
			i++;
			j++;
		}
	}

	while (i >= 0 && j >= 0)
	{
		sum2 += a[i][j];
		i--;
		j--;
	}
	printf("%d, %d", sum1, sum2);
}
