#include "holberton.h"

/**
 * main - print the program arguments
 * @argc : the number of argument
 * @argv : an arry of the argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc; i++)
	{
		_putchar("%s/n", argv[i]);
	}
	return (0);
}
