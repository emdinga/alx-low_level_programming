#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints all numbers less than 10
 * Return: Always 0 (succes)
 */
int main(void)
{

	int c = 48;

	while (c <= 58)
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
