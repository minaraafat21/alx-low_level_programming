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

	for (i = 'a' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
