#include "main.h"

/**
 * print_diagonal - Print diagonal line dependent on the integer n.
 * @n : The number of lines using '\' characters to use
 * Return: Void.
 */
void print_diagonal(int n)
{
int i;
int entries;

for (i = 0; i < n; i++)
{
for (entries = 0; entries < i; entries++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}

if (n <= 0)
{
_putchar('\n');
}
}
