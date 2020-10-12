#include <stdio.h>
/**
 * main - prints all args
 * @l: number of args
 * @s: args
 * Return: Always 0
 */
int main(int l, char **s)
{
	while (l--)
	{
		printf("%s\n", *s++);
	}
	return (0);
}
