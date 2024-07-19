#include "main.h"
#include <stdlib.h>

/**
  * array_range - create array of integers from min to max
  * @min: minimum
  * @max: maximum
  * Return: ponter to the array
  */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * ((max - min) + 1));

	if (!p)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
