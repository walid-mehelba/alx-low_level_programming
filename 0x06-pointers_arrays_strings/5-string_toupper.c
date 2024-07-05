#include "main.h"

/**
  * string_toupper - convert string to uppercase
  * @s: string
  * Return: pointer to the string.
  */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++;
	}
	return (s);
}
