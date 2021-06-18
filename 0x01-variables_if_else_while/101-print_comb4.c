#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int j;
int k;
for (i = '0' ; i < '9' ; i++)
{
	for (j = '1' ; j <= '9' ; j++)
	{
	for (k = '1' ; k <= '9' ; k++)
	{
	if (i < j && j < k)
{
	putchar(i);
	putchar(j);
	putchar(k);
	if (i == '7' && j == '8' && k == '9')
	{
	continue;
	}
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
