#include "main.h"

/**
 * _strcat - main function
 * @dest: 1st parameter
 * @src: 2nd parameter
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int l;
	int j;

	l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	for (j = 0; src[j]; j++, l++)
	{
		dest[l] = src[j];
	}
	dest[l] = '\0';
	return (dest);
}
