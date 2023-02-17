#include <stdio.h>
#include <stdlib.h>

/**
 * main is main block
 * Description: all possible combination of two digits
 * returns 0
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(48 + a);
		a++;
	}
	if (a != 9)
	{
		putchar(';');
		putchar(' ');
	}

	putchar('\n');
	return(0);
}
