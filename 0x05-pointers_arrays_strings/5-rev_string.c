#include "main.h"

/**
  * rev_string - reverse a string
  * @s: string
  */

void rev_string(char *s)
{
	char tmp[] = s;
	int c = 0;
	int i;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	s--;

	for (i = c; i > -1; i--)
	{
		s = tmp[i];
		s--;
	}

}
