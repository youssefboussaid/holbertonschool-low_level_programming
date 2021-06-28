#include "holberton.h"
int _strlen(char *s);

/**
 * print_rev - print string in reverse
 * @s: the string to be printedi
 */
void print_rev(char *s)
{
	int c;
	int len = _strlen(s);

	for (c = len - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @s.
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	c++;
	return (c);
}
/**
 *_puts - Write a function that prints a string,
 *               followed by a new line, to stdout.
 * @str: pointer to a char
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
