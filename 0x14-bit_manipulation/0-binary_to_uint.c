#include "main.h"

/**
 * binary_to_uint - Main function that convert binary into int
 * @b: Parameter value containing a string
 * Return: 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int d;

	if (!b)
		return (0);
	for (c = 0; b[c]; c++)
	{
		if (b[c] < '0' || b[c] > '1')
			return (0);
		d = 2 * d + (b[c] - '0');
	}
	return (d);
}
