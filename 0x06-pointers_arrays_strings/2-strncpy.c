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
	char *tmp = dest;

	while (i < n)
	{
		*dest = src[i];
		dest++;
		i++;
	}
	return (tmp);
}
