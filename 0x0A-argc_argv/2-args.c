#include <stdio.h>

/**
  * main - print program name
  * @argc: args counts
  * @argv: args vector
  * Return: always 0 success
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
