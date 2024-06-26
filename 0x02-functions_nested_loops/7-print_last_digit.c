#include "main.h"

/**
  * print_last_digit - print the last digit of an integer.
  * @n: integer to be passed to the function.
  * Return: last digit of the integer.
  */

int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
