#include <stdio.h>
#include <stdlib.h>
/*
 * Main: Contains main block
 * Desc: prints all the numbers of base 16 in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
