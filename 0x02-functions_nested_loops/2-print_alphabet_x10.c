#include "holberton.h"
/**
 * print_alphabet_x10 - Operates
 *
 * Return: On success 1.
 *
 */
void print_alphabet_x10(void)
{
  int i, j;
  for (j = 0; j <= 9; j++){
  for (i = 'a'; i <= 'z'; i++)
    {
      _putchar(i);
    }
  _putchar(10);
}
}
