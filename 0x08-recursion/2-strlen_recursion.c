#include "main.h"

/**
  * _strlen_recursion - lenght of a string
  * @s: string
  * Return: length of the string
  */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
