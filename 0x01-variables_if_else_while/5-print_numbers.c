#include <stdio.h>
#include <stdlib.h>

/**
 * Main is main block
 * Descprion: Prints numbers on the base of 10
 * Return 0
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
	return(0);
}
