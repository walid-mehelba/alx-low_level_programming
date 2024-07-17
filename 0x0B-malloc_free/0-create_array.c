#include "main.h"
#include <stdlib.h>

/**
  * create_array - create array of chars
  * @size: size of the array
  * @c: first char
  * Return: pointer to the array or NULL if fails
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
