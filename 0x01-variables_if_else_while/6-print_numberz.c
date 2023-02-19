#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints all numbers less than 10
 * Return: Always 0 (succes)
 */
int main(void)
{

	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
