#include <stdio.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
printf("size of a char: %lu byte(s)\n", sizeof(char));
printf("size of an int: %lu byte(s)\n", sizeof(int));
printf("size of a lang int: %lu byte(s)\n", sizeof(long int));
printf("size of a lang lang int: %lu byte(s)\n", sizeof(long long int));
printf("size of float: %lu byte(s)", sizeof(float));
return (0);
}
