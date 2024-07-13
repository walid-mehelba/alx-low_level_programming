#include <stdio.h>

/**
  * main - print program name
  * @argc: args counts
  * @argv: args vector
  * Return: always 0 success
  */

int main(int argc, char *argv[] __attribute((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
