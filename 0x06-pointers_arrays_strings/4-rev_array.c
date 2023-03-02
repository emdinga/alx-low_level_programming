#include "main.h"

/**
 * reverse_array - main function
 * @a: 1st parameter
 * @n: 2nd parameter
 * Return: a nd n
 */

void reverse_array(int *a, int n)
{
	int c;
	int b;

	for (c = 0; c < n--; c++)
	{
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}
}
