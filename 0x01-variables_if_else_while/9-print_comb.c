#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Program that prints combinations of single-digits
 * Return: 0 (Success)
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
putchar(' ');
}

putchar('\n');

return (0);

}
