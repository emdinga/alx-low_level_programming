#include "main.h"

/**
 * _abs - Entry point
 * @b: initial value
 * Return: Always a success
 */

int _abs(int b)
{
	if (b < 0)
		b = -(b);
	else if (b >= 0)
		b = b;
	return (b);
}
