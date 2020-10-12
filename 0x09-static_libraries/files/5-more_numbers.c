#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: none.
 */

void more_numbers(void)
{
int n, i;
for (i = 0; i < 10; i++)
{
for (n = 0; n < 15; n++)
{
if (n > 9)
{
_putchar(n / 10 + '0');
}
_putchar(n % 10 + '0');
}
_putchar(10);
}
}
