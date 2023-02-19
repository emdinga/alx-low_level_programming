#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: prints all numbers in bases of 16
 * Return: Always 0 (succes)
 */
int main(void)
{
	char c;

	for (c = 'o'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
