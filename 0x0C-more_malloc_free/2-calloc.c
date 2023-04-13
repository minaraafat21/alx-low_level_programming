#include <stdlib.h>
#include "main.h"

/**
 * *_memset - sets to zeros
 * @s: memory area to be filled
 * @b: char 
 * @n: number of times to copy b
 *
 * Return: pointer to be retured
 */
char *_memset(char *s, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = 0;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements 
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, nmemb * size);

	return (p);
}
