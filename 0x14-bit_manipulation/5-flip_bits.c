#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int c;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = ex >> i;
		if (c & 1)
			count++;
	}

	return (count);
}
