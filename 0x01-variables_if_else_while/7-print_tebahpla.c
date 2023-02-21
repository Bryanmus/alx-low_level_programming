#include <stdio.h>

/*
 * Main: Contains main block
 * Desc: prints the lowercase alphabet in reverse, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char c ='z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
