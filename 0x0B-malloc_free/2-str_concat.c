#include "main.h"
#include <stdlib.h>

/**
  * str_concat - concat two strings
  * @s1: first string
  * @s2: second string
  * Return: pointer to the new string
  */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j = 0, r, k;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	p = malloc(sizeof(char) * (i + j + 1));

	if (p == NULL)
		return (NULL);

	for (r = 0; s1[r] != '\0'; r++)
		p[r] = s1[r];

	for (k = 0; s2[k]; k++)
	{
		p[r] = s2[k];
		r++;
	}
	return (p);


}
