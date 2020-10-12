#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @l: length of s
 * @s: apuntador
 * Return: Always 0
 */
int main(int l, char *s[])
{
	if (l == 3)
	{
		printf("%d\n", atoi(s[1]) * atoi(s[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
