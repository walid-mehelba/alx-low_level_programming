#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sum all the parameters
  * @n: number of parameters passed
  * @...: variable number of parameters
  * Return: sum of parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
