#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: prints in lower cases followed by a new line
 * return: Always (sucees)
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
