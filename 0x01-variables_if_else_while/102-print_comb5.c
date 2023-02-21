#include <stdio.h>
/*
 * Main contains main block
 * Desc:
Write a program that prints all possible combinations of two two-digit numbers.

The numbers should range from 0 to 99
The two numbers should be separated by a space
All numbers should be printed with two digits. 1 should be printed as 01
The combination of numbers must be separated by comma, followed by a space
The combinations of numbers should be printed in ascending order
00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar eight times maximum in your code
You are not allowed to use any variable of type char
All your code should be in the main function

 * Return: 0
 */
int main(void)
{
	int c, d, e, f, g, h;
	c=0;

	while (c<=98)
	{
		d=(c/10+'0');
		e=(c%10+'0');
		f=0;
		while (f<=99)
		{
			g=(f/10+'0');
			h=(f%10+'0');

			if (c<f)
			{
				putchar(d);
				putchar(e);
				putchar(' ');
				putchar(g);
				putchar(h);

				if (c!=98)
				{
					putchar(',');
					putchar(',');
				}
			}
			f++;
		}
		c++;
	}
	putchar('\n');
	return(0);
}
