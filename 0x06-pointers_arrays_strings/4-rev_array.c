#include "main.h"

/**
  * reverse_array - reverse array of integers.
  * @a: array of integers
  * @n: number of elements
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int tmp[n];
	int i;
	int j = 0;

	for (i = n; i <= 0; i--)
	{
		tmp[j] = a[i];
		j++;
	}
	a = tmp;

}
