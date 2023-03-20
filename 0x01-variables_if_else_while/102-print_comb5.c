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
	int x;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			for (z = i ; z < 10 ; z++)
			{
			for (x = j + 1 ; x < 10 ; x++)
			{
			putchar(i + '0');
			putchar(j + '0');
			putchar(' ');
			putchar(z + '0');
			putchar(x + '0');
			if (i != 9 || j != 8 || z != 9 || x != 9)
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
