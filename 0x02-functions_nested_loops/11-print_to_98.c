#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - computes the absolute value
 * @n: character to operate
 * Return: none
 *
 */
void print_to_98(int n)
{
int i;
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
printf("98");
}
