#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*main - is main block
 *Description: get a number and check itlast digit if it less or greater than 5 
 *return (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = % 10;
	if (last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n, last);
	esle if (last < 6 )
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
	return (0);
}
