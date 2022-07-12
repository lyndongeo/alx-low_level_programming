#include "main.h"

/**
 * swap_int - main
 * @a: pointer to integer
 * @b: pointer to integer
 * Return: void (Success)
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
