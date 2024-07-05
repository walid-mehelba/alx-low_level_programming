#include "main.h"

/**
  * reverse_array - reverse array of integers.
  * @a: array of integers
  * @n: number of elements
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}

}
