#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
for (x = 0; x < 10; x++)
{
	putchar((x % 10) + '0');
if (x == 9)
	continue;
	putchar(',');
	putchar(' ');
}
return (0);
}
