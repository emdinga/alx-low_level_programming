#include "main.h"

/**
 * _strncat - main function
 * @dest: 1st parameter
 * @src: 2nd parameter
 * @n: 3rd parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int l;
	int j;

	l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[l] = src[j];
		j++;
		l++;
	}
	dest[l] = '\0';
	return (dest);
}
