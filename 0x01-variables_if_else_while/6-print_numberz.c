#include <stdio.h>
#include <stdlib.h>

/**
 * main is main block
 * Description: prints all numbers less than 10
 * return 0
 */
int main(void)
{

	int c = 0;

	while (c <= 10)
	{
		putchar (48 + c);
		c++;
	}

	putchar(c);
	return(0);
}
