#include <stdio.h>
#include <stdlib.h>

/**
 * Main is main block
 * Description: prints alphabets in reverse
 * return 0
 */
int main(void)
{
	char c = 'z';

	while ( c >= 'a')
	{

		putchar(c);
		c--;
	}

	putchar('\n');
	return(0);
}
