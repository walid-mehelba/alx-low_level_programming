#include "main.h"

/**
  * _strncat - concat two strings
  * @dest: main string
  * @src: string to be concatenated
  * @n: number of characters to be concatenated
  * Return: pointer to the result string
  */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
