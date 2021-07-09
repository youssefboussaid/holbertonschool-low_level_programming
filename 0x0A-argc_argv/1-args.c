#include "holberton.h"
#include <stdio.h>
/**
* main - prints the number of argument
* @argc: the number of argument
* @argv: an arry of the argument
* Return: 0
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
