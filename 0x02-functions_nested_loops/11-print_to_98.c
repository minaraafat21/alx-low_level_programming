#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints till 98 regardless of where we start
 *
 * @n: parameter
 *
 * Return: always 0
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n ; i < 98 ; i++)
		{
			printf("%d, ", i);
		}
		printf("98");
		printf("\n");
	}
	if (n > 98)
	{
		for (i = n ; i > 98 ; i--)
		{
			printf("%d, ", i);
		}
		printf("98");
		printf("\n");
	}
}
