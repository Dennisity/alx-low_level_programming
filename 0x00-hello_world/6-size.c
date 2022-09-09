#include <stdio.h>

/**
 * main - Print open sesame
 *
 * Return: Always 0 great work
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf( "The size of a char: %lu byte(s)\n", sizeof(a));
printf( "The size of an int: %lu byte(s)\n", sizeof(b));
printf( "The size of a long int: %lu byte(s)\n", sizeof(c));
printf( "The size of a long long int: %lu byte(s)\n", sizeof(d));
printf( "The size of an float: %lu byte(s)\n", sizeof(e));
return (0);
}
