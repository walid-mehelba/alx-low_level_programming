#include "main.h"

/**
  * print_numbers - print numbers from 0 to 9
  * Return: void
  */

void print_numbers(void)
{
	char i;

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
