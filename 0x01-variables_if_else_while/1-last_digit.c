#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - block
 * Description: Assign a random number to the variable n when executed
 * Print the last digit of the number
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (last < 6)
		printf("Lat digit of %d is %d and is less than 6 and not 0\n", n, last);

	return (0);
}
