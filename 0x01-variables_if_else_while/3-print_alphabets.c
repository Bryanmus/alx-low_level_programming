#include <stdio.h>
/*
 * Main : Contains main function
 * Desc: prints the alphabet in lowercase, and then in uppercase followed by new line
 * Return:0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';
	
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
