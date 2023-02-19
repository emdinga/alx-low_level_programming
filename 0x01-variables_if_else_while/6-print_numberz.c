#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints all numbers less than 10
 * Return: Always 0 (succes)
 */
int main(void)
{

	int c = '0';

	while (c <= 10)
	{
		putchar (48 + c);
		c++;
	}

	putchar(c);
	return (0);
}
