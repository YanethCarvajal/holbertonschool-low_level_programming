#include<stdio.h>
/**
 * main - prints the alphabet lowercase and inverted
 * Return: 0
 */
int main(void)
{
char ch = 'z'; /* ch es de character*/

while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
