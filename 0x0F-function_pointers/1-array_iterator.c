#include "function_pointers.h"
#include <stdio.h>
/**
  * array_iterator - execute a function on each element of an array
  * @array: array
  * @size: size of array
  * @action: function
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	while (i < size)
	{
		action(array[i++]);
	}


}
