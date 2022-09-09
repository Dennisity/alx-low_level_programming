#include <stdio.h>
/**
 * main - open sesame point
 *
 * Return: Always 0 (congrats/great)
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	if (alphabet == 'q')
		continue;
	else if (alphabet == 'e')
		continue;
	putchar (alphabet);
}
putchar ('\n');
return (0);
}
