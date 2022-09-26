#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memset - fills the first memory with a constant byte
 *
 * @s: pointer to memory area to fills
 * @n: number of bytes to fills
 * @b: constant bytes
 *
 * Return: a pointer to the memory area @s
 *
 */

char *_memset(char *s, char b, unsigned int n)


{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
