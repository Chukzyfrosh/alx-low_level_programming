#include <stdio.h>

/**
 * main - print single digit in base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++
	}

	putchar('\n');
	return (0);
}
