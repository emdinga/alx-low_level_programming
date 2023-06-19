#include "main.h"

/**
 * _strpbrk - main function
 * @s: 1st parameter value
 * @accept: 2nd parameter value
 * Return: s or 0
 */

char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			return (s);
		}
		s++;
	}
	return ('\0');
}
