#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Pointer
 *
 * Return: a converted number or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;

	if (b == NULL)
		return (0);

	for (; *b; ++b)
	{
		if (*b == '0')
		{
			r <<= 1;
		}
		else if (*b == '1')
		{
			r = (r << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (r);
}
