#include "holberton.h"
/**
 *_strlen_recursion -   prints the length of the string
 *@s: pointer to the string 
 *Return: the length if the string
 */

int _strlen_recursion(char *s)
{
	if (*s =='\0')
		return (0);
	else 
		return (1 + _strlen_recursion(s + 1));
}
