#include <stdio.h>

/**
 * main - print the size of bytes
 *
 * Description: using the main function
 * this program prints "the various bytes sizes"
 * Return: Always 0 great work
 */
int main(void)
{
     char f;
     int g;
     long int h;
     long long int i;
     float j;
     printf("size of an char: %d byte(s)\n", sizeof(f));
     printf("size of an int: %d byte(s)\n", sizeof(g));
     printf("size of a long int: %d byte(s)\n", sizeof(h));
     printf("size of a long long int: %d byte(s)\n", sizeof(i));
     printf("size of a float: %d byte(s)\n", sizeof(j));
     return (0);
}
