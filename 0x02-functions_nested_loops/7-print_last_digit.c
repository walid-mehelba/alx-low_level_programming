#include "main.h"
#include "6-abs.c"

/**
  * print_last_digit - print the last digit of an integer.
  * @n: integer to be passed to the function.
  * Return: last digit of the integer.
  */

int print_last_digit(int n)
{
	int last_digit = _abs(n);

	last_digit %= 10;	
	return (last_digit);
}
