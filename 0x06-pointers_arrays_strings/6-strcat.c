#include "main.h"

/**
  * _strcat - append string
  * @dest: destination string
  * @src: source string
  * Return: pointer to the resulting string
  */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++
	}
	*dest = '\0';
	return (tmp);
}
