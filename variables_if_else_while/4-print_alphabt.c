#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except letters
 * Return: 0
 */
int main(void)
{
char low_alp_eq;
low_alp_eq = 'a';
while (low_alp_eq <= 'z')
{
if (low_alp_eq != 'e' && low_alp_eq != 'q')
{
	putchar(low_alp_eq);
}
low_alp_eq++;
}
putchar('\n');
return (0);
}
