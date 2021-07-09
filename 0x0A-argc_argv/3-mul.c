#include "holberton.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * main - multiplies two numbers
 * @argc : the number of argument
 * @argv : an arry of the argument
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int x, y;
	int mul;

	(void) argc;
	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mul = x * y;
		printf("%d\n", x);
		return (0);
	}
	else
	printf("Error\n");
	return (1);
}
