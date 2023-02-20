#include <stdio.h>
/**
*main - Entry point
*Description: 'print number of base 16'
*Return: Always 0 (Success)
*/
int main(void)
{
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
