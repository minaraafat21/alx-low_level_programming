#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 **/
int main(void)
{
	int i;
	int j;
	int z;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = i + 1 ; j < 9 ; j++)
		{
			for (z = j + 1 ; z < 10 ; z++)
			{
			if (z != i && z != j && i != j)
			{
			putchar(i + '0');
			putchar(j + '0');
			putchar(z + '0');
			if (i != 7)
			{
				putchar(',');
				putchar(' ');
			}
			else
				putchar('\n');
			}
			}
		}
	}
	return (0);
}
