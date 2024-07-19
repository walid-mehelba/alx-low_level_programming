#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocate memory for an array and set to 0
  * @nmemb: elements
  * @size: size of elements
  * Return: pointer to the array
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
