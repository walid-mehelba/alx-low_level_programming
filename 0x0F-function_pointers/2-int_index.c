#include "function_pointers.h"

/**
  * int_index - search for int inside array
  * @array: array
  * @size: size of array
  * @cmp: pointer to function
  * Return: index of the int
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int result;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		result = cmp(array[i]);

		if (result != 0)
			return (i);
		i++;
	}

	return (-1);
}
