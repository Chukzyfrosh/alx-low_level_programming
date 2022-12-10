#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase,
 * followed by a new line, except q and o
 * Return: Always 0 (Success)
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'o' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}
