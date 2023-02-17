#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main is main block
 * Descpription: prints all possible 3 digits 
 * return 0 (succes)
 */

int main(void)

{
	int a;
	int b;
	int c;

	while (a = '0', a < '9')
	{
		putchar(a);
		c++;
	}

	while (b = a + '1', b <= '9')
	{
		putchar(b);
		b++;
	}
	while (c = a + '1', c <= '9')
	{
		putchar(c);
		a++;
	}
	while ((b != a) != c)
	{
		putchar(',');
		putchar(' ');
	}
	
	
	putchar('\n');
	return(0);
	

}
