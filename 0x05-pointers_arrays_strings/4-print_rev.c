#include "main.h"

/**
  * print_rev - print string in reverse
  * @s: string
  * Return: void
  */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;

	for (len; len > 0; len--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

