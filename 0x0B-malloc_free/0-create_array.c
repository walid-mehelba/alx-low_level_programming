#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * create_array - create array of chars
  * @size: size of the array
  * @c: first char
  * Return: pointer to the array or NULL if fails
  */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *p = malloc(sizeof(char) * size);

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
