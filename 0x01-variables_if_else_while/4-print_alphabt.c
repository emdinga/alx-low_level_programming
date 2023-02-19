#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: main prints in lower cases followed by a new line
 * Return: Always 0 (sucees)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
