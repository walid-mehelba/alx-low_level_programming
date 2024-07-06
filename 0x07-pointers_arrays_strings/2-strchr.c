#include "main.h"

/**
  * _strchr - locate a character in a string.
  * @s: string
  * @c: character to be located
  * Return: pointer occurrence of the character or NULL if not found.
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
