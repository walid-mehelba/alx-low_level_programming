#include "main.h"

/**
  * _memset - fills memory with a constant byte.
  * @s: pointer to memory address
  * @b: bytes
  * @n: number of bytes
  * Return: pointer to memory area
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
