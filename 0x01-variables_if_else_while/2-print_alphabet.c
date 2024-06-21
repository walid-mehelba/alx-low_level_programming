#include <stdio.h>

/**
  * main - Prints the alphabet.
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i <26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
