#include "main.h"

/**
  * print_alphabet - print all alphabets a-z
  *
  * Return: void.
  */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
