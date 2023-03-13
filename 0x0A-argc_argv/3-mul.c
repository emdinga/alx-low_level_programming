#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: parameter value
 * @argv: parameter value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;
		for (i = 1; i < 3; i++)
		j *= _atoi(argv[i]);
		printf("%d\n", j);
	}
	return (0);
}
