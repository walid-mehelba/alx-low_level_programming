#include "main.h"

/**
  * leet - encode a string into 1337
  * @str: string
  * Return: pointer to the string
  */

char *leet(char *str)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i = 0, j = 0;
	
	while (str[i] != '\0')
	{
		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
				str[i] = numbers[j];
			j++;
		}
		i++;
	}
	return (str);
}
