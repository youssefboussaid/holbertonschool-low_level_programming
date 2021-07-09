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
	int i;
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", mul);
		return (0);
	}
	else
	printf("Error\n");
	return (1);
}
