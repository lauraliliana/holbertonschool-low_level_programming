#include "holberton.h"
/**
 * _isdigit - verifies if c is a digit
 * @c : digit to compare
 * Return: 1 if a digit
 */
int _isdigit(int c)
{
while (c >= '0' && c <= '9')
return (1);
return (0);
}
