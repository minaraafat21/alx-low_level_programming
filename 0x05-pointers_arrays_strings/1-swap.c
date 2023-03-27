#include "main.h"

/**
 * swap_int - swaps
 * @a: parameter1
 * @b: parameter2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
