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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", _atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
