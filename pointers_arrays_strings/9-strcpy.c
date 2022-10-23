#include "main.h"
/**
 * strcpy - It copies the content into a pointer
 * Return: 0
 * @dest: pointer
 * @src: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;

	while (src[y])
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = '\0';

	return (dest);

}
