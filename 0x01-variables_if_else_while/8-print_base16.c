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
	int ch;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (ch = 97; ch <= 102; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
