#include <stdio.h>
/**
 * main - Print all possible combinations of single digit numbers.
 * Return: 0
 */
int main(void)
{
int n = 48;
int c = 44;
int s = 32;
while (n <= 57)
{
putchar(n);
if (n < 57)
{
putchar(c);
}
if (n < 57)
{
putchar (s);
}
n++;
}
putchar('\n');
return (0);
}
