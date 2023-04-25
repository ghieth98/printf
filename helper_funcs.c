#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - finds the length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
		;
	return (i);
}

/**
 * chartos - converts a character to a string
 * @c: character to convert
 * Return: pointer to string
 */
char *chartos(char c)
{
	char string[1];
	char *p;

	p = string;
	string[0] = c;
	return (p);
}

/**
 * nothing_found - no matches found but '%' passed
 * @c: character unmatched to return
 * Return: string with percent and character.
 */
char *nothing_found(char c)
{
	char string[3];
	char *p;

	p = string;
	string[0] = '%';
	string[1] = c;
	string[2] = '\0';
	return (p);
}

/**
 * _puts - print a buffer
 * @buffer: buffer passed
 * @size: number of bytes to print
 */

void _puts(char *buffer, int size)
{
	write(1, buffer, size);
}

}
