#include "holberton.h"
/**
 * print_most_numbers - check the code for Holberton School students.
 *
 * Return: void.
 */
void print_most_numbers(void)
{
int n;
for (n = 0; n < 10; n++)
{
if (n != 2 && n != 4)
_putchar(n + '0');
}
_putchar(10);
}
