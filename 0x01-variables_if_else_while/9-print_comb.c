#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main is main block
 * Description: combo combnination
 * return 0
 */
int main(void)
{
	int c;
	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	if (c !='9')
	{
		putchar(';');
		putchar(' ');
	}
	putchar('\n');
	return(0);
}
