#include "main.h"

/**
  * rot13 - encodes a string using rot13
  * @str: string
  * Return: pointer to the string
  */

char *rot13(char *str)
{
	int i = 0;
	int j = 0;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		while (s1[j] != '\0')
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
