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
	int f;

	for (f = 'o'; f <= '9'; f++)
	{
		putchar(f);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
