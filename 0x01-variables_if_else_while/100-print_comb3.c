#include <stdio.h>

/**
  * main - Print all possible different combinations of two digits.
  *
  * Return: Always 0.
  */

int main(void)
{
	int i,j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
