#include "main.h"

/**
 * _isdigit - Entry point
 * @c: parameter value
 * Return: Always 0 (success)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
