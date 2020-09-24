#include "stdio.h"

/**
 * main - prints numbers from 1 - 100.
 * For multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz
 * Return: 0.
 */
int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 || n % 5 == 0)
{
if (n % 3 == 0)
{
printf("Fizz");
}
if (n % 5 == 0)
{
printf("Buzz");
}
printf(" ");
}
else
{
printf("%d ", n);
}
}
printf("\n");
return (0);
}
