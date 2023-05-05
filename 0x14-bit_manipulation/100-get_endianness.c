#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *endianness = (char *)&num;

	if (*endianness == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
