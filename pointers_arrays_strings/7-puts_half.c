#include "main.h"
/**
 * puts_half - function that prints half of a string,
 * followed by a new line
 * Return: The second half of the chain.
 * @str: array
 */
void puts_half(char *str)
{
	int i = 0;
	int l = 0; /*l de longitud de la cadena*/
	int n;

	while (str[i++])
	{
		l++;
	}
	if ((l % 2) == 0)
	{
		n = l / 2;
	}
	else
	{
		n = (l + 1) / 2;
	}
	for (i = n; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\0');

}
