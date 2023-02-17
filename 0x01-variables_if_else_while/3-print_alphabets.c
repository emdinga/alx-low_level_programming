#include <stdio.h>
#include <stdlib.h>

/**
 * main -main block
 * Description : prints lower caese and than in lower cases
 * return 0
 */
int main (void)
{
        char c = 'a';

        while ( c <= 'z')
        {

                putchar(c);
                c++;
        }

	 c = 'A';

        while ( c <= 'Z')
        {

                putchar(c);
                c++;
        }

        putchar('\n');
        return(0);
}
