#include "main.h"

/**
 * _strncpy - main function
 * @dest: 1st parameter value
 * @src: 2nd parameter value
 * @n: 3rd parameter value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
