#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: Parameter value one
 * @m: Parameter value two
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;
	unsigned long int result = n ^ m;

	while (result != 0)
	{
		if (result & 1)
		{
			c++;
		}
		result >>= 1;
	}
	return (c);
}
