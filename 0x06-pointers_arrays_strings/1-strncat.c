#include "main.h"

/**
  * _strncat - concat two strings
  * @dest: main string
  * @src: string to be concatenated
  * @n: number of characters to be concatenated
  */

char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (tmp);
}
