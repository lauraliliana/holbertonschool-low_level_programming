#include <stdio.h>
/**
 * main - prints a
 * @a: number of args
 * @b: args
 * Return: Always 0
 */
int main(int a, char **b)
{
	(void)b;
	printf("%d\n", --a);
	return (0);
}
