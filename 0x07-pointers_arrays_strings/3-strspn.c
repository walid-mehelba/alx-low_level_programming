#include "main.h"

/**
  * _strspn - gets the length of a prefix substring.
  * @s: string
  * @accept: input
  * Return: number of bytes.
  */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int counter = 0, tmp = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				counter++;
			}
			j++;
		}
		j = 0;
		i++;
		if (tmp < counter)
			tmp = counter;
		else if (tmp == counter)
			return counter;
	}
	return (counter);
}
