#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: 1st parameter
 * @argv: 2nd parameter
 * Return: 0 always
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
