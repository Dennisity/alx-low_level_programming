#include <stdio.h>
/**
 * main -sesame
 *
 * Return: Always 0 great
 */
int main(void)

{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);

		if (number == 57)
		{
			break;
		}

		putchar(',');
		putchar (' ');
	}

	putchar('\n');

	return (0);

}
