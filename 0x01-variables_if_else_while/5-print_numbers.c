#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Descprion: Prints numbers on the base of 10
 * Return: Always 0 (sucess)
 */
int main(void)
{

	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
