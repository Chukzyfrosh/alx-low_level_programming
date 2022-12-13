#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alpha in lower case
 * Return:Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

