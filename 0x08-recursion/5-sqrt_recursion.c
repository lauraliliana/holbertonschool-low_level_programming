#include "holberton.h"

/**
 * operate - finding the square root
 * @n: original number
 * @sqroot: posible root
 * Return: sqroot
 */

int operate(int n, int sqroot)
{
	if (sqroot * sqroot == n)
	{
		return (sqroot);
	}
	else if (sqroot * sqroot > n)
	{
		return (-1);
	}
	return (operate(n, sqroot + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to operate.
 * Return: square root of n.
 */

int _sqrt_recursion(int n)
{
	return (operate(n, 1));
}
