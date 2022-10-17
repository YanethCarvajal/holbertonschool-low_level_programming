#include <stdio.h>
/**
 * main - Print all base 16 numbers in lowercase.
 * Return: 0
 */
int main(void)
{
int chn = 48; /*El caracter número inicia en código ASCII 48 = 0*/
char l = 'a'; /*La letra inicial es 'a'*/

while (chn <= 57) /*el caracter número termina en el código ASCII 57 =9*/
{
putchar(chn);
chn++;
}
while (l <= 'f') /*La letra final es 'f'*/
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
