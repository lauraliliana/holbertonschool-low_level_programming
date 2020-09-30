#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - prints in reverse.
 * @s: string to print.
 * Return: none.
 */
void rev_string(char *s)
{
int i, j, k;
char temp;
for (i = 0; s[i] != '\0'; i++)
{
}
k = i / 2;
i--;
for (j = 0; i >= k; j++)
{
temp = s[j];
s[j] = s[i];
s[i] = temp;
i--;
}
}
