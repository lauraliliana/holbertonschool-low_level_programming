#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings..
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters from s2 that should be included
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, k, l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
	{
		n = j;
	}
	p = malloc(i + n + 1);
	if  (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		p[k] = s1[k];
	}
	for (l = 0; l <= n; l++)
	{
		p[(i + l)] = s2[l];
	}
	p[(i + n)] = '\0';
	return (p);
}
