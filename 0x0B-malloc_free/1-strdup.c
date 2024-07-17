#include "main.h"
#include <stdlib.h>
/**
  * _strdup - copy a string to new memory location
  * @str: string to be copied
  * Return: pointer to the copy or null if failed
  */

char *_strdup(char *str)
{
	char *p;
	int i = 0, j;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
	{
		p[j] = str[j];
	}
	return (p);

}
