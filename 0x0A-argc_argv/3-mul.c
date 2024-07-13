#include <stdio.h>
#include <stdlib.h>

/**
  * main - print program name
  * @argc: args counts
  * @argv: args vector
  * Return: always 0 success
  */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i = atoi(argv[1]);
		int j = atoi(argv[2]);

		printf("%d\n", i * j);
		return (0);
	}
}
