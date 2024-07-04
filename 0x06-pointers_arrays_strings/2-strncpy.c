#include "main.h"

/**
  * _strncpy - copy src to dest
  * @dest: destincation string
  * @src: source string
  * @n: number of characters
  * Return: pointer to the result string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
