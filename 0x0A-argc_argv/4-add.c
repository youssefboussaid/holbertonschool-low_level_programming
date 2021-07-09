#include "holberton.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * main -add positive numbers
 * @argc : the number of argument
 * @argv : an arry of the argument
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Erroe\n");
			return (1);
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}