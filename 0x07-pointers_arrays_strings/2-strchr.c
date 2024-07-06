#include "main.h"

/**
  * _strchr - locate a character in a string.
  * @s: string
  * @c: character to be located
  * Return: pointer occurrence of the character or NULL if not found.
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s);
		}
		i++;
	}
	return (0);
}
