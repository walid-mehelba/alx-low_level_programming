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
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
