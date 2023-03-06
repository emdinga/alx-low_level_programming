#include "main.h"

/**
 * _strspn - main function
 * @s: 1st parameter value
 * @accept: 2nd parameter value
 * Return: n
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int b;

	n = 0;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				n++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
