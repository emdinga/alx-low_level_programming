#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @a: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **a)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || a == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; a[i][n]; n++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; a[i][n]; n++)
	{
		str[r] = a[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
