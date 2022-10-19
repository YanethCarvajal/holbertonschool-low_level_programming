#include "main.h"
/**
*  swap_int - function that swaps the values of two integers.
*  @a: pointter 1
*  @b: pointer 2
*  Return: void
*/
void swap_int(int *a, int *b)
{
	int reem; /*variable reem = reemplazo*/

	reem = *b;
	*b = *a;
	*a = reem;
}

