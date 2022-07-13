# include <stdio.h>
# include "main.h"
/**
 * swap_int - This function swaps values of int variables
 * @a: integer 1
 * @b: integer 2
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int result;
	{
		result = *a;
	}
	{
		*a = *b;
	}
	{
		*b = result;
	}
}

