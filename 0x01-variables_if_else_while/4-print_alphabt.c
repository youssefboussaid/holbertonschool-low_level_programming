#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the size of various types based on
 *        the computer it is compiled and run on..
 *
 * Return: Always 0.
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	if (ch!='e' && ch!='q')
	putchar(ch);
}
	putchar('\n');
return (0);
}       
