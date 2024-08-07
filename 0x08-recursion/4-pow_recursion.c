#include "main.h"

/**
  * _pow_recursion - x raised to the power y
  * @x: integer
  * @y: power
  * Return: result
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
