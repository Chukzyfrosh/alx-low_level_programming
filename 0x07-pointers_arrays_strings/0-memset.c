#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: Starting address of memory to be filled
 * @b: The desired value
 * @n: number of byte to be changed
 *
 * Return: Change array with new value of n byte
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
