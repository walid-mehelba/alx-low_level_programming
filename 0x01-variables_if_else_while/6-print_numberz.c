#include <stdio.h>

/**
  * main - Print all single digit numbers from 0.
  *
  * Return: Always 0.
  */

int main(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
