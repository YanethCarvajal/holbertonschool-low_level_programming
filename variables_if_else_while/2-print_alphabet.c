#include <stdio.h>
/**
 * main - This is a function that prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
