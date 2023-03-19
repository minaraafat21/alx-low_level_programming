#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 10 ; i++)
		putchar(i + '0');
	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
