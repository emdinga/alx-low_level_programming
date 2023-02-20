#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: combo combnination
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	if (c != '9')
	{
		putchar(';');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
