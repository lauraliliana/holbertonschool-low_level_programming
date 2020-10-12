#include <stdio.h>
/**
 * main - prints a
 * @a: number of args
 * @b: args
 * Return: Always 0
 */
int main(int l, char **s)
{
	(void)s;
	printf("%d\n", --l);
	return (0);
}
