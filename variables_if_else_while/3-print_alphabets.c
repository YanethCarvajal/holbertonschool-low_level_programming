#include <stdio.h>
/**
 * main - it prints the alphabet in lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char s;

	for (s = 97; s <= 122; s++)
		putchar(s);

	for (s = 65; s <= 90; s++)
		putchar(s);

	putchar('\n');

	return (0);
}
