#include <stdio.h>
/**
 * main - prints a
 * @l: number of args
 * @s: args
 * Return: Always 0
 */
int main(int l, char **s)
{
	(void)s;
	printf("%d\n", --l);
	return (0);
}
