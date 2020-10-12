#include <stdio.h>
/**
 * main - prints all args
 * @a: number of args
 * @b: args
 * Return: Always 0
 */
int main(int l, char **s)
{
	while(l--)
	{
		printf("%s\n", *s++);
	}
	return (0);
}
