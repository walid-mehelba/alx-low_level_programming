#include "main.h"

/**
  * reverse_array - reverse array of integers.
  * @a: array of integers
  * @n: number of elements
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int *tmp = &a[n - 1];
	int i;
	int x;
	int j = 0;

	for (i = 0; i <= n/2; i++)
	{
		x = a[j];
		a[j] = *tmp;
		*tmp = x;
		j++;
		tmp--;
	}
	a = tmp;

}
