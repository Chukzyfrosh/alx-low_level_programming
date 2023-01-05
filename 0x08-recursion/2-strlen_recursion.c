/*
 * File: 2-strlen_recursion.c
 * Auth: Frosh
 */

#include "main.h"

/**
 * _strlen_recursion - Return the length of a string.
 * @s: The string to be measured.
 *
 * Return: The lenth of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
