#include <stdio.h>
/**
 * main - Prints b
 * @a: number of args
 * @b: args
 * Return: Always 0
 */
int main(int a, char **b)
{
	printf("%s\n", *b);
	(void)a;
	return (0);
}
