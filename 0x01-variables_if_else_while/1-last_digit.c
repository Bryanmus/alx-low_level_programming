#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
/*
 * main - Has main block
 * Desc: Gets a random number and check its last digit and compares it
 * Return: 0
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n% 10;
	if (last > 5)
		printf("Last digit in %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit in %i is %i and is 0\n", n, last);
	else if (last < 6)
		printf("Last digit in %i is %i and less than 6 and not 0\n", n, last);
	return (0);
}
