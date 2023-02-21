#include <stdio.h>
/*
 * Main: Contains main block
 * Desc:  prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * You are not allowed to use any variable of type char
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar twice in your code
All your code should be in the main function

Return: 0
*/
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++:
	}

	putchar('\n');
	return (0);
}
