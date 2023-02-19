#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints alphabets in reverse
 * Return: Always 0 (succes)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{

		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
