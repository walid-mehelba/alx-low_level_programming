#include <stdio.h>

/**
  * main - print program name
  * @argc: args counts
  * @argv: args vector
  * Return: always 0 success
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
