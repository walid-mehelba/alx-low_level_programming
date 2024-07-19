#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concate two strings with n bytes
  * @s1: first string
  * @s2: second string
  * @n: number of bytes
  * Return: pointer to the new string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j;
	unsigned int counter1 = 0, counter2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	while (s1[counter1])
		counter1++;
	while (s2[counter2])
		counter2++;

	if (n < counter2)
		p = malloc(sizeof(char) * (counter1 + n + 1));
	else
		p = malloc(sizeof(char) * (counter1 + counter2 + 1));

	if (p == NULL)
		return (NULL);

	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}

	while (n < counter2 && i < (counter1 + n))
		p[i++] = s2[j++];

	while (n >= counter2 && i < (counter1 + counter2))
		p[i++] = s2[j++];
	
	p[i] = '\0';
	return (p);
}
