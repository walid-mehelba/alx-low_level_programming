#include <stdio.h>

/**
  * main - Print all alphabet in lowercase the uppercase.
  *
  * Return: Always 0 (Success).
  */

int main(void)
{
	char alph_lower = "abcdefghijklmnopqrstuvwxyz";
	char alph_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph_lower[i]);
	}

	for (i = 0; i < 26; i++)
	{
                putchar(alph_lower[i]);
        }
	putchar('\n');
	return (0);
}
