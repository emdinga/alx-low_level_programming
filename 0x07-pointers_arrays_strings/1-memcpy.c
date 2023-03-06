#include "main.h"

/**
 * _memcpy - main function
 * @dest: 1st parameter value
 * @src: 2nd parameter value
 * @n: 3rd parameter value
 * Return: dest value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b;

	a = 0;
	b = n;
	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
