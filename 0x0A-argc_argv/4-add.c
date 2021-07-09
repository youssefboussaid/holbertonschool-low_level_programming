#include <ctype.h>
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
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
			printf("Erroe\n");
			return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{	
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
