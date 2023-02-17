#include <stdio.h>
#include <stdlib.h>

/**
 * main is main block
 * Description: prints all numbers in bases of 16
 * return 0
 */
int main(void)
{
	char c;

	for (c ='o'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return(0);
}
