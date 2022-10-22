#include "main.h"
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * return: 0
 * @str: pointer
 */
void puts2(char *str)
{
	int i;
	int x;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	for (i = 0; i < x; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
