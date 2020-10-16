#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min: first number
 * @max: second number
 * Return: pointer p.
 */

int *array_range(int min, int max)
{
	int *p, i, num;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	num = min;
	for (i = 0; i < (max - min + 1); i++, num++)
	{
		p[i] = num;
	}
	return (p);
}
