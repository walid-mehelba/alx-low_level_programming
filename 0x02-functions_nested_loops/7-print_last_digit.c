#include "main.h"

/**
  * print_last_digit - print the last digit of an integer.
  * @n: integer to be passed to the function.
  * Return: last digit of the integer.
  */

int print_last_digit(int n)
{
	int last_digit = n % 10;
	_putchar(last_digit);
	return (last_digit);
}
