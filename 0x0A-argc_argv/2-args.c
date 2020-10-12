#include <stdio.h>
/**
 * main - prints all args
 * @a: number of args
 * @b: args
 * Return: Always 0
 */
int main(int a, char **b)
{
	int i;
	for (i = 0; i <= a; b++)
	{
		printf("%s\n", *b);
	}
	return (0);
}
