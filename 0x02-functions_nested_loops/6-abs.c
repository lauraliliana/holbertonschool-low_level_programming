#include "holberton.h"
/**
 * _abs - computes the absolute value
 * @r: character to operate
 * Return: abs value
 *
 */
int _abs(int r)
{
int abs;
if (r < 0)
{
abs = r * (-1);
return (abs);
}
return (r);
}
