#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: prints all numbers in bases of 16
 * Return: Always 0 (succes)
 */

int main(void)
{
	int n;
	char ch;

	for (n = 0; n <= 9; ch++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
