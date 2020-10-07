#include "holberton.h"

/**
 * _puts_recursion - prints a string recursively.
 * @s: puntero al string
 * Return: none.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar(10);
return;
}
else
{
_putchar(*s);
_puts_recursion(++s);
}
}
