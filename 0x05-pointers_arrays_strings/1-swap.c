#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swaps 2 numbers.
 * @a: first number.
 * @b: second number.
 * Return: none.
 */
void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}
