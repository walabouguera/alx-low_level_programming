#include <stdio.h>
/**
*main - Entry point
*Description: 'print number of base 16'
*Return: Always 0 (Success)
*/
int main(void)
{
int n;

for (n = 48; n <= 57; n++)
{
putchar(n);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
