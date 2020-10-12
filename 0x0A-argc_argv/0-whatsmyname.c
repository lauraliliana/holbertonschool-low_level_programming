#include <stdio.h>
/**
 * main - Prints b
 * @a: number of args
 * @b: args
 * Return: Always 0
 */
int main(int l, char **s)
{
	printf("%s\n", *s);
	(void)l;
	return (0);
}
